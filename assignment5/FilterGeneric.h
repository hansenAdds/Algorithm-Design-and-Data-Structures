#ifndef FilterGeneric_h
#define FilterGeneric_h
#include <vector>
using namespace std;

class FilterGeneric{
vector<int> v;
	virtual bool g(int u)=0;
int u;
public:
	FilterGeneric();
	vector<int> filter(vector<int> v);
};
#endif