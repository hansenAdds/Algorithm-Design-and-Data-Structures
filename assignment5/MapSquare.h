#include "MapGeneric.h"
#include <vector>
#ifndef MapSquare_H
#define MapSquare_H

class MapSquare:public MapGeneric{
public:
	MapSquare();
	int f(int x);
};
#endif