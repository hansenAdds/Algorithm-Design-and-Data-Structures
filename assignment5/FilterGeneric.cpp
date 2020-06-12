#include "FilterGeneric.h"
using namespace std;
#include <vector>

FilterGeneric::FilterGeneric(){

}
vector<int> FilterGeneric::filter(vector<int> v){
	vector<int> vv;
	int count=0;
	for(int i=0;i<v.size();i++){
		if (g(v[i])==true){
		vv.push_back(v[i]);
		count++;
		}
	}
	vector <int> vvv;
	for(int i=0;i<count;i++){
		vvv.push_back(vv[i]);
	}
	return vvv;

}