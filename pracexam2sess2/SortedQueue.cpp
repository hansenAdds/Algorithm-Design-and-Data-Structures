#include "SortedQueue.h"
SortedQueue::SortedQueue(){

}
void SortedQueue::add(int val){
	for(int i=0;i<content.length();i++){
		if (i==conten.length()-1){
			content[i]=val; //add value in array 
		}
	}
}
int SortedQueue::remove(){
	for(int i=0;i<content.length();i++){
		if (i==content.length()-1){
			return content[i];   //return the value
		}
	}
}