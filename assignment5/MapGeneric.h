#ifndef MapGeneric_h
#define MapGeneric_h
#include <vector>

using namespace std;


class MapGeneric{
	virtual int f(int x)=0;
	vector <int> v;
public:
	MapGeneric();
	vector<int> map(vector<int> v);
};
#endif