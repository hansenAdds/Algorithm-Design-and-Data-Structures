#ifndef ReduceGeneric_h
#define ReduceGeneric_h
#include <vector>
using namespace std;


class ReduceGeneric{
virtual int binaryOperator(int x,int y)=0;
vector<int> vv;
vector <int >vvv;
vector <int >vvvv;

public:
	ReduceGeneric();
	int reduce(vector<int> v);
};
#endif