#ifndef LinkedList_h
#include "Node.h"
#define LinkedList_h

class LinkedList{
Node* head;
public:
	LinkedList(); //constructor 
	LinkedList(int array[length],int length);
	void addFront(int newItem);
	void addEnd(int newItem);//add at front and end and given position
	void addAtPosition(int position,int newItem);
	int search(int item);
	void deleteFront();
	void deleteEnd();//delete at front and end and given position
	void deletePosition(int position);
	int getItem(int position);//return value 
	void printItems(); // return list
	~LinkedList();
};
#endif