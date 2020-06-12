#include "Node.h"
using namespace std;

Node::Node(int x){//initialise varilbles
data=x;
next=null;
}
int Node::dataGetter(){
	return data;
}
void Node::dataSetter(int newdata){
	data=newdata;
}
Node* Node::nextGetter(){
	return next;
}
void Node::nextSetter(Node* newnext){
	next=newnext;
}