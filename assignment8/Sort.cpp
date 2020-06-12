#include "Sort.h"
#include <vector>
#include <iostream>
using namespace std;


Sort::Sort(){

}
void Sort::swap(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}
void Sort::printarr(std::vector<int> v){
	int n=v.size();
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
}