#ifndef FilterOdd_h
#include "FilterGeneric.h"
#define FilterOdd_h
#include <vector>

class FilterOdd:public FilterGeneric{
public:
	FilterOdd();
	bool g(int u);

};
#endif