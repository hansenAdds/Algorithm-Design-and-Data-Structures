#include "ReduceGeneric.h"
#ifndef ReduceMinimum_h
#define ReduceMinimum_h
#include <vector>

class ReduceMinimum:public ReduceGeneric{
public:
	int binaryOperator(int x,int y);
	ReduceMinimum();

};
#endif