/* Your code here! */
#include "maze.h"
#include "dsets.h"
#include <stack>
#include <algorithm>
/**
 * Creates Empty Maze
 */
SquareMaze::SquareMaze() {

}

bool SquareMaze::canTravel(int x, int y, int dir) const {
    if (dir == 0) {
        if ( x == w-1 )
            return false;
        return !right[getCell(x,y)];
    }
    if (dir == 1) {
        if (y == h - 1)
            return false;
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
    int x = 5;
    int y = 5;
    int destX = 0;
    int destY = 0;
    cs225::PNG* maze = drawMaze();
    std::vector<int> path = solveMaze();
    cs225::HSLAPixel red = cs225::HSLAPixel(0,1,0.5,1);
    //std::cout<<"height : "<<maze->height() <<", width:" << maze->width()<<std::endl;
    for (int dir : path) {
        //std::cout<< dir<<std::endl;
        if (dir == 0) {
            destX++;
            int max = x + 10;
            for(; x < max; x++) {
                if (x < (int)maze->width()&& y < (int)maze->height()){
                cs225::HSLAPixel & pixel = maze->getPixel(x,y);
                pixel = red;
                }
            }
        } else if (dir == 1) {
            destY++;
            int max = y + 10;
            for(; y < max; y++) {
                if (x < (int)maze->width()&& y < (int)maze->height()){
                cs225::HSLAPixel & pixel = maze->getPixel(x,y);
                pixel = red;
                }
            }
        } else if (dir == 2) {
            destX--;
            int min = x - 10;
            for(; x > min; x--) {
                if (x < (int)maze->width()&& y < (int)maze->height()) {
                cs225::HSLAPixel & pixel = maze->getPixel(x,y);
                pixel = red;
                }
            }
        } else if (dir == 3) {
            destY--;
            int min = y - 10;
            for(; y > min; y--) {
                if (x < (int)maze->width()&& y < (int)maze->height()) {
                cs225::HSLAPixel & pixel = maze->getPixel(x,y);
                pixel = red;
                }
            }
        }
        
    }
    for (int k = 1; k <=9; k++) {
        cs225::HSLAPixel & pixel = maze->getPixel(destX*10+k, 10*(destY+1));
        pixel.l = 1;
    }
    return maze;
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
    int seed = std::chrono::steady_clock::now().time_since_epoch().count();
    srand(seed);
    //srand ( time(NULL) );
    int walls = 0;
    while(walls != w*h - 1) {
        int randCell = rand()%(w*h - 1) + 1;
        int randWall = rand()%2;
        
        if (randWall == 0 && randCell%w != 0) {
            int temp = set.find(randCell -1);
            //std::cout<<randCell<<std::endl;
            if (temp == -1 || temp != set.find(randCell - 1 + 1)) {
                set.setunion(randCell - 1,randCell - 1+1);
                right[randCell] = false;
                walls++;
            }
        } else if (randWall == 1 && randCell<(h*w - w)) {
            int temp = set.find(randCell - 1);
            if (temp == -1 || temp != set.find(randCell - 1 + w)) {
                set.setunion(randCell - 1,randCell - 1 + w);
                down[randCell] = false;
                walls++;
            }
        }
    }
}





void SquareMaze::setWall(int x, int y, int dir, bool exists) {
    int cell = getCell(x,y);
    if (dir == 1) {
        down[cell] = exists;
    } else if (dir == 0) {
        right[cell] = exists;
    }
}


int SquareMaze::getCell(int x, int y) const{
    return y*w + x + 1;
}

std::vector<int> SquareMaze::solveMaze() {
    std::vector<std::pair<int,int>> bestPath;
    bool* visited = new bool[h*w];
    for (int end = w*h - w + 1; end <= w*h; end++) {
        for (int i  = 0; i <= h*w; i++) {
            visited[i] = false;
        }
        std::stack<std::pair<int,int>> track;
        std::vector<std::pair<int,int>> currPath;
        int currX = 0;
        int currY = 0;
        visited[1] = true;
        //currPath.push_back(1);
        while(getCell(currX,currY) != end) {
            //std::cout<<getCell(currX,currY)<<std::endl;
            bool deadend = true;
            if (canTravel(currX,currY,0) && !visited[getCell(currX + 1,currY)]) {
                track.push(std::make_pair(getCell(currX + 1,currY),0));
                deadend = false;
            }
            if (canTravel(currX, currY, 1) && !visited[getCell(currX, currY + 1)]) {
                track.push(std::make_pair(getCell(currX, currY + 1),1));
                deadend = false;
            }
            if (canTravel(currX, currY, 2) && !visited[getCell(currX - 1,currY)]) {
                track.push(std::make_pair(getCell(currX - 1,currY),2));
                deadend = false;
            }
            if (canTravel(currX, currY, 3) && !visited[getCell(currX,currY - 1)]) {
                track.push(std::make_pair(getCell(currX,currY - 1),3));
                deadend = false;
            }
            std::pair<int,int> cell = track.top();
            track.pop();
            if (deadend) {
                int prev = 0;
                int prevDir = cell.second;
                if (prevDir == 0) {
                    prev = cell.first - 1;
                } else if (prevDir == 1) {
                    prev = cell.first - w;
                } else if (prevDir == 2) {
                    prev = cell.first + 1;
                } else if (prevDir == 3) {
                    prev = cell.first + w;
                }
                while (currPath.back().first != prev) {
                    currPath.pop_back();
                }

            }
            // std::pair<int,int> cell = track.top();
            // track.pop();
            //std::cout<<cell.first<<","<<cell.second<<std::endl;

            visited[cell.first] = true;
            currPath.push_back(cell);
            currX = (cell.first-1)%w;
            currY = (cell.first - 1)/w;
            //std::cout<<getCell(currX,currY)<<std::endl;

        }
        if (currPath.size() > bestPath.size()) {
            bestPath = currPath;
        }
    }
    delete[] visited;
    std::vector<int> directions;
    for (std::pair<int,int> curr : bestPath) {
        directions.push_back(curr.second);
    }
    return directions;
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