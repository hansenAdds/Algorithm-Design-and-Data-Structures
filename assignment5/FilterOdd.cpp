#include "FilterOdd.h"
using namespace std;
#include "FilterGeneric.h"

FilterOdd::FilterOdd(){

}

bool FilterOdd::g(int u){
	if (u%2!=0){
		return true;
	}
	else{
		return false;
	}
}