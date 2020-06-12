#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
using namespace std;

MapAbsoluteValue::MapAbsoluteValue(){

}
int MapAbsoluteValue::f(int x){
	if (x==0){
		return 0;
	}
	else if (x<0){
		return x*(-1);
	}
	else if (x>0){
		return x;
	}
}