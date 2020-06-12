#include "FilterForTwoDigitPositive.h"
#include "FilterGeneric.h"
using namespace std;

FilterForTwoDigitPositive::FilterForTwoDigitPositive(){

}
bool FilterForTwoDigitPositive::g(int u){
	if (u<100&&u>=10){
		return true;
	}
	else{
		return false;
	}
}