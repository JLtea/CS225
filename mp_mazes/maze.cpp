/* Your code here! */
#include "maze.h"
#include "dsets.h"
#include <queue>
#include <algorithm>
/**
 * Creates Empty Maze
 */
SquareMaze::SquareMaze() {

}

bool SquareMaze::canTravel(int x, int y, int dir) const {
    if (dir == 0) {
        return !right[getCell(x,y)];
    }
    if (dir == 1) {
        return !down[getCell(x,y)];
    } 
    if ( dir == 2 ) {
		if ( x == 0 )
			return false;
		else if ( right[getCell(x-1,y)] == false )
			return true;
		else
			return false;
	}
    if ( dir == 3 ) {
		if ( y == 0 )
			return false;
		else if ( down[getCell(x,y-1)] == false )
			return true;
		else
			return false;
	}
	return false;
}

cs225::PNG* SquareMaze::drawMaze() const {
    cs225::PNG* maze = new cs225::PNG(w*10+1,h*10+1);
    for (unsigned x = 0 ; x < maze->width(); x++) {
        if (x > 9){
            cs225::HSLAPixel &pixel = maze->getPixel(x,0);
            pixel.l = 0;
        }
    }
    for (unsigned y = 0; y < maze->height(); y++) {
        cs225::HSLAPixel &pixel = maze->getPixel(0,y);
        pixel.l = 0;
    }

    for (int x = 0; x < w; x++) {
        for (int y = 0; y < h; y++) {
            /* line right wall*/
            if (!canTravel(x,y,0)) {
                for (int k = 0; k <= 10; k++) {
                    cs225::HSLAPixel &pixel = maze->getPixel((x+1)*10,y*10+k);
                    pixel.l = 0;
                }
            }
            /* line bottom wall*/
            if (!canTravel(x,y,1)) {
                for (int k = 0; k <= 10; k++) {
                    cs225::HSLAPixel &pixel = maze->getPixel(x*10+k, (y+1)*10);
                    pixel.l = 0;
                }
            }
        }
    }
    return maze;
}

cs225::PNG* SquareMaze::drawMazeWithSolution() {
    return drawMaze();
}

void SquareMaze::makeMaze(int width, int height) {
    if (!down.empty()) {
        down.clear();
    }
    if (!right.empty()) {
        right.clear();
    }
    DisjointSets set;
    this->w = width;
    this->h = height;
    set.addelements(width*height);
    for (int i = 0; i < width*height; i++) {
        right.push_back(true);
        down.push_back(true);
    }
    srand ( time(NULL) );
    int walls = 0;
    while(walls != w*h - 1) {
        int randCell = rand()%(w*h);
        int randWall = rand()%2;
        
        if (randWall == 0 && randCell%w != 0) {
            int temp = set.find(randCell);
            if (temp == -1 || temp != set.find(randCell + 1)) {
                set.setunion(randCell,randCell+1);
                right[randCell] = false;
                walls++;
            }
        } else if (randWall == 1 && randCell<=(h*w - w)) {
            int temp = set.find(randCell);
            if (temp == -1 || temp != set.find(randCell + w)) {
                set.setunion(randCell,randCell + w);
                down[randCell] = false;
                walls++;
            }
        }
    }
    

}



void SquareMaze::setWall(int x, int y, int dir, bool exists) {
    int cell = getCell(x,y);
    if (dir) {
        down[cell] = exists;
    } else {
        right[cell] = exists;
    }
}


int SquareMaze::getCell(int x, int y) const{
    return y*w + x + 1;
}

std::vector<int> SquareMaze::solveMaze() {
    // std::vector<int> maxDist;
    // std::vector<int> currPath;
    // for (int end = w*h - w + 1; end <= w*h; end++) {
        
    // }
    return std::vector<int>();
}

/* make maze in order*/
// for(int cell = 1; cell < w*h; cell++) {
//         int randWall;
//         /*check if edge*/
//         if (cell%w == 0) {
//             randWall = 1;
//         } else if (cell > (h*w - w)){
//             randWall = 0;
//         } else {
//             randWall = rand()%2;
//         }

//         /*find adjacent cell*/
//         int nextCell;
//         if (randWall) {
//             nextCell = w + cell;
            
//         } else {
//             nextCell = cell + 1;
//         }
//         /*remove wall, union in disjoint set*/
//         if (set.find(cell) == -1 || set.find(cell) != set.find(nextCell)) {
//             set.setunion(cell,nextCell);
//             down[cell] = false;
//         } else {
//             /*possible that it has a connected cell but the other wall could be removed?*/
//         }      
//     }