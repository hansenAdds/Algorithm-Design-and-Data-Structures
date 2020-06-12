using namespace std;
#include <iostream>
#include <vector>
#include "MapGeneric.h"
MapGeneric::MapGeneric(){

}
vector<int>MapGeneric::map(vector<int> v){
	vector<int> vv;

	for(int i=0;i<v.size();i++){
		vv.push_back(f(v.at(i)));
	}
	return vv;
}
