#include "ReduceGCD.h"
#include "ReduceGeneric.h"
using namespace std;
#include <algorithm>

ReduceGCD::ReduceGCD(){

}
int ReduceGCD::binaryOperator(int x,int y){
	if (y==0){
		return x;
	}
	else{
		return binaryOperator(y,x%y);
	}
}