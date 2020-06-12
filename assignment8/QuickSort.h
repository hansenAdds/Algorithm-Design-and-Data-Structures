#ifndef QuickSort_h
#define QuickSort_h
#include <vector>
using namespace std;

class QuickSort:public Sort{
		// int partition(vector<int> &v,int low,int high);
public:
	void swapp(vector<int> &v,int x,int y);
	void quicksort(vector<int> &v,int low,int high);
	// int partition(vector<int> v,int low,int high,int mid);
};
#endif