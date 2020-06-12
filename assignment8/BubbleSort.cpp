#include "Sort.h"
#include "BubbleSort.h"
#include <vector>
#include <iostream>
using namespace std;

void BubbleSort::bubblesort(vector<int> v){
	vector<int> vvv;
	for(int i=0;i<v.size()-1;i++){
		for(int j=0;j<v.size()-i-1;j++){
			if (v[j]<v[j+1]){
				swap(v[j],v[j+1]);
			}
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}