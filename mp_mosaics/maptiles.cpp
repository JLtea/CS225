/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */
    vector<Point<3>> points;
    map<Point<3>,TileImage*> tileMap;
    for (const TileImage &curr : theTiles) {
        LUVAPixel pixel = curr.getAverageColor();
        points.push_back(convertToXYZ(pixel));
        TileImage* copy = new TileImage(curr);
        tileMap.insert(pair<Point<3>,TileImage*>(convertToXYZ(pixel),copy));
        
    }
    KDTree<3> tree = KDTree<3>(points);
    MosaicCanvas* mosaic = new MosaicCanvas(theSource.getRows(), theSource.getColumns());
    for (int x = 0; x < theSource.getRows(); x++) {
        for (int y = 0; y < theSource.getColumns(); y++) {
            LUVAPixel srcPixel = theSource.getRegionColor(x,y);
            Point<3> closest = tree.findNearestNeighbor(convertToXYZ(srcPixel));
            TileImage* tile = (tileMap.find(closest)->second);
            mosaic->setTile(x,y,tile);
        }
    }
    return mosaic;
}

