#include <iostream>
#include "dsets.h"
#include "maze.h"
#include "cs225/PNG.h"

using namespace std;

int main()
{
    // Write your own main here
    //cout << "Add your own tests here! Modify main.cpp" << endl;
    SquareMaze m;
    m.makeMaze(50, 50);
    std::cout << "MakeMaze complete" << std::endl;

    // cs225::PNG* unsolved = m.drawMaze();
    // unsolved->writeToFile("unsolved.png");
    // delete unsolved;
    // std::cout << "drawMaze complete" << std::endl;

    // std::vector<int> sol = m.solveMaze();
    // std::cout << "solveMaze complete" << std::endl;

    cs225::PNG* solved = m.drawCreativeMaze();
    solved->writeToFile("creative.png");
    delete solved;
    std::cout << "drawMazeCreative complete" << std::endl;

    return 0;
}
