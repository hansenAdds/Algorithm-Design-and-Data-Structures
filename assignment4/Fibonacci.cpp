#include <iostream>
using namespace std;
#include "Fibonacci.h"


int Fibonacci::caculate(int x){

	if (x==1){
		return 1;	
	}
	else if (x==0){
		return 0;
	}
	else{
		return caculate(x-1)+caculate(x-2);//using recursion .
	}

}