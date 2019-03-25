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
    unsigned w = theSource.getRows();
    unsigned h = theSource.getColumns();
    MosaicCanvas* canvas = new MosaicCanvas(w, h);

    vector<Point<3>> pts;
    std::map<Point<3>, TileImage *> dict;
    for(unsigned x=0;x<theTiles.size();x++){
      pts.push_back(convertToXYZ(theTiles[x].getAverageColor()));
      dict.insert(pair<Point<3>, TileImage*>(pts.back(), &theTiles[x]));
    }
    KDTree<3> tree(pts);

    Point<3> curColor;
    Point<3> closeColor;
    TileImage * closeImage;

    for(unsigned i=0;i<w;i++){
      for(unsigned j=0;j<h;j++){
        curColor = convertToXYZ(theSource.getRegionColor(i,j));
        closeColor = tree.findNearestNeighbor(curColor);
        closeImage = dict.find(closeColor)->second;
        canvas->setTile(i, j, closeImage);
      }
    }

    return canvas;
}
