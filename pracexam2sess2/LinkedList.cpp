#include "LinkedList.h"
#include "Node.h"
#include <iostream>
using namespace std;

//default constructor
LinkedList::LinkedList() {
	head = NULL;
}

//the constructor that takes an array of positive size
LinkedList::LinkedList(int* arr, int length) {
    if (length==0)
    {
        head= NULL;
        return;
    }
    Node * newNode= new Node(arr[0], NULL);
    head= newNode;
    for(int i=1; i<length; i++)
    {
        Node * nextNewNode= new Node(arr[i], NULL);
        newNode->next= nextNewNode;
        newNode=nextNewNode;
    }
    return;
}

//the print function
void LinkedList::printItems() {
    if(head != NULL)
    {
        Node* nextNode = head;
        while (nextNode != NULL)
        {
            std::cout << nextNode->data << ' ';
            nextNode = nextNode->next;
        }
        std::cout << std::endl;
    }
    return;
}

//The swap function: Assumes that if one of the nodes that are going to be swapped is the first node of the list, then the corresponding nodeBefore is a nullptr.
void LinkedList::swap(Node * nodeBefore1, Node * nodeBefore2){
    if(nodeBefore1==nodeBefore2)
        return;
    if(nodeBefore2==NULL)
    {
        nodeBefore2= nodeBefore1;
        nodeBefore1=NULL;
    }
    // at this point we know that the two nodeBefores are not equal, and if one of them is nullptr, it is the first one.
    Node * temp1;
    Node * temp2= nodeBefore2->next;
    if(nodeBefore1==NULL)
    {
        temp1=head;
        head=temp2;
    }
    else
    {
        temp1= nodeBefore1->next;
        nodeBefore1->next= temp2;
    }
    nodeBefore2->next= temp1;
    Node * temp3= temp2 -> next;
    temp2-> next= temp1-> next;
    temp1-> next= temp3;
}

//to be implemented by you: this function finds the node with maximum data in the list, and swaps it with the last element of the list
void LinkedList::findMaxAndSwapWithLastElement(){
    Node* temp=head;
    Node* prev=head;
    int max=head->data;
    while (temp->next!=NULL){ //travse all data record the largest one 
        temp=temp->next;  // record the largest node;
        if (temp->data>prev->data){
            max=temp->data;
            prev=temp;
        }
    
    }
    Node* tempp=head;
    int counter=1;
    while(tempp->next!=NULL){ //count the length of linkedlist
        tempp=tempp->next;
        counter++;
    }
    

    if (counter==2){
     Node* temp1=head;  //if length is 2 ,just swap 
     int first=head->data;

     Node* temp2=head->next;
    int change;
    if (temp1->data>temp2->data){
        temp1->data=temp2->data;
        temp2->data=first;
    }
    else{
        // dont change anything.
    }
    }
    else{

    Node* temppp=head;
    while (temppp->next!=NULL){ //if length is  not 2 ,swap large one to last one
        temppp=temppp->next;
        if (temppp==prev){
            prev->data=tempp->data;
        }
    }
    temppp->data=max;

    }   
    return ;
}

