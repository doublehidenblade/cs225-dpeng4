/* Your code here! */
#include <iostream>
#include <vector>
#include <cstdlib>
#include "cs225/PNG.h"
#include "maze.h"
#include <stack>
#include "dsets.h"
using namespace cs225;

SquareMaze::SquareMaze(){
  // No-parameter constructor. More...
}

SquareMaze::~SquareMaze(){
  // No-parameter constructor. More...

  for(int x=0;x<w;x++){
    for(int y=0;y<h;y++){
      if(walls[x][y]!=NULL){delete [] walls[x][y];
      walls[x][y] = NULL;}
    }
    if(walls[x]!=NULL){delete [] walls[x];
    walls[x] = NULL;}
  }
  if(walls!=NULL){delete [] walls;
  walls = NULL;}
}

void 	SquareMaze::makeMaze(int width, int height){
  // Makes a new SquareMaze of the given height and width. More...
  w = width; h = height;
  walls = new int**[w];
  for(int x=0;x<w;x++){
    walls[x] = new int*[h];
    for(int y=0;y<h;y++){
      walls[x][y] = new int[2];
      walls[x][y][0] = 1;
      walls[x][y][1] = 1;
    }
  }
  //delete wall
  DisjointSets cells;
  cells.addelements(w*h);
  int dir;
  int cell1;
  int cell2;
  int iteration = 0;
  while(iteration<=3){
    for(int i=0;i<w;i++){
      for(int j=0;j<h;j++){
        dir = rand()%4;
        cell1 = i*w+j;
        if(dir==0){
          if(i+1>=w){continue;}
          cell2 = (i+1)*w+j;}
        else if(dir==1){
          if(j+1>=h){continue;}
          cell2 = i*w+j+1;}
        else if(dir==2){
          if(i-1<0){continue;}
          cell2 = (i-1)*w+j;}
        else{
          if(j-1<0){continue;}
          cell2 = i*w+j-1;}
        if(cells.find(cell1) != cells.find(cell2)){
          setWall(i,j,dir,false);
          cells.setunion(cell1, cell2);
        }
      }
    }
    iteration++;
  }
}

bool 	SquareMaze::canTravel(int x, int y, int dir) const{
  // This uses your representation of the maze to determine whether it is possible to travel in the given direction from the square at coordinates (x,y). More...
  if(dir==0){//right
    if(x+1>=w){return false;}
    return walls[x][y][0]==0;}
  if(dir==1){//down
    if(y+1>=h){return false;}
    return walls[x][y][1]==0;}
  if(dir==2){//left
    if(x-1<0){return false;}
    return walls[x-1][y][0]==0;}
  if(dir==3){//up
    if(y-1<0){return false;}
    return walls[x][y-1][1]==0;}
  return true;
}

void 	SquareMaze::setWall(int x, int y, int dir, bool exists){
  // Sets whether or not the specified wall exists. More...
  int wall = exists ? 1 : 0;
  if(dir==0){ walls[x][y][0] = wall;}//right
  if(dir==1){ walls[x][y][1] = wall;}//down
  if(dir==2){ walls[x-1][y][0] = wall;}//left
  if(dir==3){ walls[x][y-1][1] = wall;}//up
}

std::vector<int> SquareMaze::solveMaze(){
  // Solves this SquareMaze. More...
  std::vector<int> path;
  int startx = 0;
  int starty = 0;
  int dist = 0;
  int cur, curx, cury;
  bool right = false, down = false, left = false, up = false;
  int ** map = new int*[w];
  for(int i=0;i<w;i++){
    map[i] = new int[h];
    for(int j=0;j<h;j++){
      map[i][j] = -1;
    }
  }
  map[startx][starty] = 0;
  std::stack<int> visited;
  visited.push(startx*w+starty);
  while(!visited.empty()){
    cur = visited.top(); visited.pop();
    curx = cur/w; cury = cur%w;
    if(canTravel(curx,cury,0) && map[curx+1][cury]==-1){
      map[curx+1][cury] = map[curx][cury] + 1;
      visited.push((curx+1)*w+cury);
    }
    if(canTravel(curx,cury,1) && map[curx][cury+1]==-1){
      map[curx][cury+1] = map[curx][cury] + 1;
      visited.push((curx)*w+cury+1);
    }
    if(canTravel(curx,cury,2) && map[curx-1][cury]==-1){
      map[curx-1][cury] = map[curx][cury] + 1;
      visited.push((curx-1)*w+cury);
    }
    if(canTravel(curx,cury,3) && map[curx][cury-1]==-1){
      map[curx][cury-1] = map[curx][cury] + 1;
      visited.push((curx)*w+cury-1);
    }
  }
  int maxdist = 0;
  int destinationX = 0;
  for(int i=0;i<w;i++){
    if(map[i][h-1]>maxdist){
      destinationX = i;
      maxdist = map[i][h-1];
    }
  }
  curx = destinationX; cury = h-1;
  while(1){
    if(curx==0 && cury==0){break;}
    if(canTravel(curx,cury,0) && map[curx+1][cury] == map[curx][cury]-1){
      path.push_back(2);
      curx = curx + 1;
      continue;
    }
    if(canTravel(curx,cury,1) && map[curx][cury+1] == map[curx][cury]-1){
      path.push_back(3);
      cury = cury + 1;
      continue;
    }
    if(canTravel(curx,cury,2) && map[curx-1][cury] == map[curx][cury]-1){
      path.push_back(0);
      curx = curx - 1;
      continue;
    }
    if(canTravel(curx,cury,3) && map[curx][cury-1] == map[curx][cury]-1){
      path.push_back(1);
      cury = cury - 1;
    }
  }
  std::reverse(path.begin(),path.end());
  //destructor
  for(int i=0;i<w;i++){
    if(map[i]){
      delete [] map[i];
      map[i] = NULL;
    }
  }
  if(map){
    delete [] map;
    map = NULL;
  }
  return path;
}

PNG * SquareMaze::drawMaze() const{
  // Draws the maze without the solution. More...
  PNG * mymaze = new PNG(w*10+1, h*10+1);
  for(int x=0;x<w*10+1;x++){
    mymaze->getPixel(x,0).l = 0;
    mymaze->getPixel(x,h*10).l = 0;
  }
  for(int y=0;y<h*10+1;y++){
    mymaze->getPixel(0,y).l = 0;
    mymaze->getPixel(w*10,y).l = 0;
  }
  for(int x=1;x<10;x++){//begin
    mymaze->getPixel(x,0).l = 1;
  }

  // set wall
  for(int i=0;i<w;i++){
    for(int j=0;j<h;j++){
      if(walls[i][j][0]==1){//has right wall
        for(int y=j*10;y<=j*10+10;y++){
          mymaze->getPixel(i*10+10,y).l = 0;
        }
      }
      if(walls[i][j][1]==1 && j!=h-1){//has down wall
        for(int x=i*10;x<=i*10+10;x++){
          mymaze->getPixel(x,j*10+10).l = 0;
        }
      }
    }
  }
  return mymaze;
}

PNG * SquareMaze::drawMazeWithSolution(){
  // This function calls drawMaze, then solveMaze; it modifies the PNG from drawMaze to show the solution vector and the exit.
  PNG * mymaze = drawMaze();
  std::vector<int> solution = solveMaze();
  int startx = 5;
  int starty = 5;
  for(unsigned i=0;i<solution.size();i++){
    if(solution[i]==0){
      for(int x=startx;x<=startx+10;x++){
        mymaze->getPixel(x,starty).h = 0;
        mymaze->getPixel(x,starty).s = 1;
        mymaze->getPixel(x,starty).l = 0.5;
        mymaze->getPixel(x,starty).a = 1;
      }
      startx += 10;
    }
    else if(solution[i]==1){
      for(int y=starty;y<=starty+10;y++){
        mymaze->getPixel(startx,y).h = 0;
        mymaze->getPixel(startx,y).s = 1;
        mymaze->getPixel(startx,y).l = 0.5;
        mymaze->getPixel(startx,y).a = 1;
      }
      starty += 10;
    }
    else if(solution[i]==2){
      for(int x=startx;x>=startx-10;x--){
        mymaze->getPixel(x,starty).h = 0;
        mymaze->getPixel(x,starty).s = 1;
        mymaze->getPixel(x,starty).l = 0.5;
        mymaze->getPixel(x,starty).a = 1;
      }
      startx -= 10;
    }
    else{
      for(int y=starty;y>=starty-10;y--){
        mymaze->getPixel(startx,y).h = 0;
        mymaze->getPixel(startx,y).s = 1;
        mymaze->getPixel(startx,y).l = 0.5;
        mymaze->getPixel(startx,y).a = 1;
      }
      starty -= 10;
    }
  }
  for(int x=startx-4;x<startx+5;x++){
    mymaze->getPixel(x,starty+5).l = 1;
  }
  return mymaze;
}

// Creative begins
void 	SquareMaze::makeMazeCreative(int width, int height){
  // Makes a new SquareMaze of the given height and width. More...
  w = width; h = height;
  walls = new int**[w];
  for(int x=0;x<w;x++){
    walls[x] = new int*[h];
    for(int y=0;y<h;y++){
      if(x*x+y*y >= ((w+h)/2*(w+h)/2)){
        walls[x][y] = new int[2];
        walls[x][y][0] = 0;
        walls[x][y][1] = 0;
        continue;
      }
      walls[x][y] = new int[2];
      walls[x][y][0] = 1;
      walls[x][y][1] = 1;
    }
  }
  //delete wall
  DisjointSets cells;
  cells.addelements(w*h);
  int dir;
  int cell1;
  int cell2;
  int iteration = 0;
  while(iteration<=3){
    for(int i=0;i<w;i++){
      for(int j=0;j<h;j++){
        if(i*i+j*j>((w+h)/2)*((w+h)/2)){
          continue;
        }
        dir = rand()%4;
        cell1 = i*w+j;
        if(dir==0){
          if(i+1>=w){continue;}
          cell2 = (i+1)*w+j;}
        else if(dir==1){
          if(j+1>=h){continue;}
          cell2 = i*w+j+1;}
        else if(dir==2){
          if(i-1<0){continue;}
          cell2 = (i-1)*w+j;}
        else{
          if(j-1<0){continue;}
          cell2 = i*w+j-1;}
        if(cells.find(cell1) != cells.find(cell2)){
          setWall(i,j,dir,false);
          cells.setunion(cell1, cell2);
        }
      }
    }
    iteration++;
  }
}

PNG * SquareMaze::drawMazeCreative() const{
  // Draws the maze without the solution. More...
  PNG * mymaze = new PNG(w*10+1, h*10+1);

  for(int x=0;x<w*10+1;x++){
    for(int y=0;y<h*10+1;y++){
      if(x*x+y*y>110*(w+h)/2*(w+h)/2){
        mymaze->getPixel(x,y).l = 0.5;
        mymaze->getPixel(x,y).h = x/10;
        mymaze->getPixel(x,y).s = 0.8;
      }
    }
  }

  for(int x=1;x<10;x++){//begin
    mymaze->getPixel(x,0).l = 1;
  }

  float sat = 0;
  // set wall
  for(int i=0;i<w;i++){
    sat += 0.02;
    for(int j=0;j<h;j++){

      if(walls[i][j][0]==1){//has right wall
        for(int y=j*10;y<=j*10+10;y++){
          mymaze->getPixel(i*10+10,y).l = 0.5;
          mymaze->getPixel(i*10+10,y).h = 20;
          mymaze->getPixel(i*10+10,y).s = sat;
          mymaze->getPixel(i*10+10,y).a = 1;
        }
      }
      if(walls[i][j][1]==1 && j!=h-1){//has down wall
        for(int x=i*10;x<=i*10+10;x++){
          mymaze->getPixel(x,j*10+10).l = 0.5;
          mymaze->getPixel(x,j*10+10).h = 20;
          mymaze->getPixel(x,j*10+10).s = sat;
          mymaze->getPixel(x,j*10+10).a = 1;
        }
      }
    }
  }
  return mymaze;
}
PNG * SquareMaze::drawMazeWithSolutionCreative(){
  // This function calls drawMaze, then solveMaze; it modifies the PNG from drawMaze to show the solution vector and the exit.
  PNG * mymaze = drawMazeCreative();
  std::vector<int> solution = solveMazeCreative();
  int startx = 5;
  int starty = 5;
  for(unsigned i=0;i<solution.size();i++){
    if(solution[i]==0){
      for(int x=startx;x<=startx+10;x++){
        mymaze->getPixel(x,starty).h = 20;
        mymaze->getPixel(x,starty).s = 1;
        mymaze->getPixel(x,starty).l = 0.5;
        mymaze->getPixel(x,starty).a = 1;
      }
      startx += 10;
    }
    else if(solution[i]==1){
      for(int y=starty;y<=starty+10;y++){
        mymaze->getPixel(startx,y).h = 20;
        mymaze->getPixel(startx,y).s = 1;
        mymaze->getPixel(startx,y).l = 0.5;
        mymaze->getPixel(startx,y).a = 1;
      }
      starty += 10;
    }
    else if(solution[i]==2){
      for(int x=startx;x>=startx-10;x--){
        mymaze->getPixel(x,starty).h = 20;
        mymaze->getPixel(x,starty).s = 1;
        mymaze->getPixel(x,starty).l = 0.5;
        mymaze->getPixel(x,starty).a = 1;
      }
      startx -= 10;
    }
    else{
      for(int y=starty;y>=starty-10;y--){
        mymaze->getPixel(startx,y).h = 20;
        mymaze->getPixel(startx,y).s = 1;
        mymaze->getPixel(startx,y).l = 0.5;
        mymaze->getPixel(startx,y).a = 1;
      }
      starty -= 10;
    }
  }
  for(int x=startx-4;x<startx+5;x++){
    mymaze->getPixel(x,starty+5).l = 1;
  }
  return mymaze;
}

std::vector<int> SquareMaze::solveMazeCreative(){
  // Solves this SquareMaze. More...
  std::vector<int> path;
  int startx = 0;
  int starty = 0;
  int dist = 0;
  int cur, curx, cury;
  bool right = false, down = false, left = false, up = false;
  int ** map = new int*[w];
  for(int i=0;i<w;i++){
    map[i] = new int[h];
    for(int j=0;j<h;j++){
      map[i][j] = -1;
      if(i*i+j*j>((w+h)/2)*((w+h)/2)){
        map[i][j] = -2;
      }
    }
  }
  map[startx][starty] = 0;
  std::stack<int> visited;
  visited.push(startx*w+starty);
  while(!visited.empty()){
    cur = visited.top(); visited.pop();
    curx = cur/w; cury = cur%w;
    if(canTravel(curx,cury,0) && map[curx+1][cury]==-1){
      map[curx+1][cury] = map[curx][cury] + 1;
      visited.push((curx+1)*w+cury);
    }
    if(canTravel(curx,cury,1) && map[curx][cury+1]==-1){
      map[curx][cury+1] = map[curx][cury] + 1;
      visited.push((curx)*w+cury+1);
    }
    if(canTravel(curx,cury,2) && map[curx-1][cury]==-1){
      map[curx-1][cury] = map[curx][cury] + 1;
      visited.push((curx-1)*w+cury);
    }
    if(canTravel(curx,cury,3) && map[curx][cury-1]==-1){
      map[curx][cury-1] = map[curx][cury] + 1;
      visited.push((curx)*w+cury-1);
    }
  }
  int maxdist = 0;
  int destinationX = 0;
  for(int i=0;i<w;i++){
    if(map[i][h-1]>maxdist){
      destinationX = i;
      maxdist = map[i][h-1];
    }
  }
  curx = destinationX; cury = h-1;
  while(1){
    if(curx==0 && cury==0){break;}
    if(canTravel(curx,cury,0) && map[curx+1][cury] == map[curx][cury]-1){
      path.push_back(2);
      curx = curx + 1;
      continue;
    }
    if(canTravel(curx,cury,1) && map[curx][cury+1] == map[curx][cury]-1){
      path.push_back(3);
      cury = cury + 1;
      continue;
    }
    if(canTravel(curx,cury,2) && map[curx-1][cury] == map[curx][cury]-1){
      path.push_back(0);
      curx = curx - 1;
      continue;
    }
    if(canTravel(curx,cury,3) && map[curx][cury-1] == map[curx][cury]-1){
      path.push_back(1);
      cury = cury - 1;
    }
  }
  std::reverse(path.begin(),path.end());
  //destructor
  for(int i=0;i<w;i++){
    if(map[i]){
      delete [] map[i];
      map[i] = NULL;
    }
  }
  if(map){
    delete [] map;
    map = NULL;
  }
  return path;
}
