#include <iostream>
#include "dsets.h"
#include "maze.h"
#include "cs225/PNG.h"

using namespace std;

int main()
{
    // Write your own main here
    SquareMaze m;

    m.makeMazeCreative(30, 30);
    std::cout << "MakeMaze complete" << std::endl;

    std::vector<int> sol = m.solveMazeCreative();
    std::cout << "solveMaze complete" << std::endl;

    cs225::PNG* solved = m.drawMazeWithSolutionCreative();
    solved->writeToFile("creative.png");
    delete solved;

    return 0;
}
