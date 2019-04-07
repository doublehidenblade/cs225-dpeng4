/* Your code here! */
#pragma once
#include <iostream>
#include <vector>
#include "cs225/PNG.h"
using namespace cs225;

class SquareMaze{
  private:
    int w;
    int h;
    // PNG * maze;
    int *** walls;
  public:
    SquareMaze();
    // No-parameter constructor. More...
    ~SquareMaze();

    void 	makeMaze(int width, int height);
    // Makes a new SquareMaze of the given height and width. More...

void 	makeMazeCreative(int width, int height);

    bool 	canTravel(int x, int y, int dir) const;
    // This uses your representation of the maze to determine whether it is possible to travel in the given direction from the square at coordinates (x,y). More...

    void 	setWall(int x, int y, int dir, bool exists);
    // Sets whether or not the specified wall exists. More...

    std::vector<int> solveMaze();
    // Solves this SquareMaze. More...
std::vector<int> solveMazeCreative();

    PNG * drawMaze() const;
    // Draws the maze without the solution. More...

PNG * drawMazeCreative() const;

    PNG * drawMazeWithSolution();
    // This function calls drawMaze, then solveMaze; it modifies the PNG from drawMaze to show the solution vector and the exit.
PNG * drawMazeWithSolutionCreative();
};
