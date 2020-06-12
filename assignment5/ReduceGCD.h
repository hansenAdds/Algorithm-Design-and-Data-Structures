#include "ReduceGeneric.h"
#ifndef ReduceGCD_h
#define ReduceGCD_h
#include <algorithm>
#include <vector>


class ReduceGCD:public ReduceGeneric{
public:
	int binaryOperator(int x,int y);
	ReduceGCD();
};
#endif