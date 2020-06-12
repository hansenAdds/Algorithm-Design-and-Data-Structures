#include "Sort.h"
#include "QuickSort.h"
using namespace std;
#include <stdio.h>
#include <vector>
#include <iostream>
void QuickSort::swapp(vector<int> &v,int x,int y){
	int temp=v[x];
	v[x]=v[y];
	v[y]=temp;
}



void QuickSort::quicksort(vector<int> &v, int low, int high) {
	int i=low;
	int j=high;
	int mid=v[(i+j)/2];
	while (i<=j){
		while (v[i]<mid)
			i++;
		
		while(v[j]>mid)
			j--;
		
		if (i<=j){
			swap(v[i],v[j]);
			i++;
			j--;
		}
	};

	   if (low<j){
	  
	   	quicksort(v,low,j);
	   
	   }
	   if (i<high){
	   		quicksort(v,i,high);
	   }
}
