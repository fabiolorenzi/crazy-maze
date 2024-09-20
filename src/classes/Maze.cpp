#include "Maze.h"

Maze::Maze(LevelNumber _levelNumber, int parentWidth, int parentHeight)
{
    levelNumber = _levelNumber;
    width = parentWidth;
    height = parentHeight;

    PopulateWallsInMazeArray(levelNumber, walls, width, height);
}

Maze::~Maze()
{
    for (Wall* wall : walls) {
        if (wall) {
            delete wall;
        }
    }
}