#include "ReduceGeneric.h"
using namespace std;
#include <vector>

ReduceGeneric::ReduceGeneric(){

}

int ReduceGeneric::reduce(vector<int> v){
	
	if (v.size()==1){
		return v[0];
	}
	else{
		v[v.size()-2]=binaryOperator(v[v.size()-1],v[v.size()-2]);
		v.pop_back();
		return reduce(v);
	}
	
}