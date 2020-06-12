#ifndef FilterNonPositive_h
#define FilterNonPositive_h
#include "FilterGeneric.h"
class FilterNonPositive:public FilterGeneric{
public:
	FilterNonPositive();
	bool g(int u);
};
#endif