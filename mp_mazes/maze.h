/* Your code here! */
#include <vector>
#include "cs225/HSLAPixel.h"
#include "cs225/PNG.h"

class SquareMaze {
    public:
    SquareMaze();
    bool canTravel(int x, int y, int dir) const;
    cs225::PNG* drawMaze() const;
    cs225::PNG* drawMazeWithSolution();
    void makeMaze(int width, int height);
    void setWall(int x, int y, int dir, bool exists);
    std::vector<int> solveMaze();
    cs225::PNG* drawCreativeMaze();
    
    private:
    int w;
    int h;

    /* true if wall exists, false otherwise*/
    std::vector<bool> right;
    std::vector<bool> down;
    
    int getCell(int x, int y)const;
};