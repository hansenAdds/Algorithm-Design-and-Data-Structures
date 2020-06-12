#include "EfficientFibonacci.h"
using namespace std;

EfficientFibonacci::EfficientFibonacci(){
	for(int i=0;i<9999;i++){ //set lenght of int to be 9999
		u[i]=0;
	}
}
int EfficientFibonacci::cacula(int x){
	if (x==1){
		return 1;//storing the value in u array;
	}
	else if(x==2){
		return 1;
	}
	else if (u[x-1]!=0){
		return u[x-1];
	}
	else if (x==0){
		return 0;
	}
	else{
		u[x-1]=cacula(x-1)+cacula(x-2);
		return u[x-1];
	}
	

}