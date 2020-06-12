#ifndef FilterForTwoDigitPositive_h
#define FilterForTwoDigitPositive_h
#include "FilterGeneric.h"
using namespace std;
class FilterForTwoDigitPositive:public FilterGeneric{
public:
	bool g(int u);
	FilterForTwoDigitPositive();
};
#endif