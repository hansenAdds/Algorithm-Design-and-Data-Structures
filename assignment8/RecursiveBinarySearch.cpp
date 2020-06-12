#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;

int RecursiveBinarySearch::search(vector<int> v,int low,int high,int x){
	int mid=(high+low)/2;
	if (low<=high){
		if (v[mid]==x){
			return mid;
		}
		else if (v[mid]>x){
			return search(v,low,mid-1,x);
		}
		else {
			return search(v,high,mid+1,x);
		}
	}
	else {
		return -1;
	}
}