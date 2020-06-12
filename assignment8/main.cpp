#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;


int main(){
	vector<int> vv;
	string sarr;
	getline(cin,sarr);
	istringstream iss(sarr);
	int val;
	while (iss>>val){
		vv.push_back(val);
	}
	


	// vector<int> vv={5,12,11,231,31,321,312,6};
	RecursiveBinarySearch C;
	int length=vv.size();
	int result=C.search(vv,0,length,1);
	if (result==-1){
		cout<<"false"<<" ";		
	}
	else{
		cout<<"true"<<" ";
	}
	
	QuickSort B;

	B.quicksort(vv,0,vv.size()-1);

	for(int i=0;i<vv.size();i++){
		cout<<vv[i]<<" ";
	}
	

	


	// for(int i=0;i<6;i++){
	// 	cout<<arrr[i]<<" ";
	// }



}