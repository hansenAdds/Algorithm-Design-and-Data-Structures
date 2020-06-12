#include "LinkedList.h"
#include "Node.h"
using namespace std;
#include <string>

LinkedList::LinkedList(){ ///set a empty list
	head=NULL;
}
LinkedList::LinkedList(int array[length],int length){//no idea

}
void LinkedList::addfront(int newItem){//add node and value at front
Node* node=new Node();
node->dataSetter(newItem);
node->nextSetter(head);
node->head=node;
}
void LinkedList::addEnd(int newItem){
Node* node=new Node();//add node and value at end

node->dataSetter(newItem);

node->nextSetter(NULL);
head=node;
}
void LinkedList::addAtPosition(int position,int newItem){//add value and node at given position
	if (position<1){
		addfront(int newItem);
	}
	else{
		Node *node=new node();
		node->dataSetter(newItem);
		node->nextSetter(next);
		head->node;
		node->head=node;
	}
}
void LinkedList::deleteFron(){//delete
	if (head!=NULL){
		node *tem=head->next;
		delete head;
		head=temp;
		--size;
	}
}
void LinkedList::deleteEnd(){
	if (this.next==NULL){
		this=NULL;//detele
		return;
	}
	Node temp=this;
	while (temp.next.next!=null){
		temp=temp.next;
	}
	temp=temp.next;
	temp=NULL
}