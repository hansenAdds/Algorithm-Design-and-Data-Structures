#include "FilterNonPositive.h"
#include "FilterGeneric.h"
using namespace std;

FilterNonPositive::FilterNonPositive(){

}
bool FilterNonPositive::g(int u){
	if (u>0){
		return true;
	}
	else{
		return false;
	}
}