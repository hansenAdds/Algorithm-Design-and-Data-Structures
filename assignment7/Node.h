#ifndef Node_h
#define Node_h
using namespace std;

class Node{
	int data; //declare data and next
	Node *next;
public:
	Node(int x);
	int dataGetter(); //getter and setter
	void dataSetter(int newdata);
	Node* nextGetter();
	void nextSetter(Node *newnext);
};
#endif