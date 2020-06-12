#include "Node.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() {
    int arr1[6]={4, 5 ,7, 13, 2, 9};
    LinkedList *list = new LinkedList(arr1, 6);
    list->findMaxAndSwapWithLastElement();
    list->printItems();
    delete list;
    int arr2[1]= {1};
    list = new LinkedList(arr2, 1);
    list->findMaxAndSwapWithLastElement();
    list->printItems();
    delete list;
    int arr3[4]= {8, 9, 10, 7};
    list = new LinkedList(arr3, 4);
    list->findMaxAndSwapWithLastElement();
    list->printItems();
    delete list;
    int arr4[2]= {8, 5};
    list = new LinkedList(arr4, 2);
    list->findMaxAndSwapWithLastElement();
    list->printItems();
    delete list;
}
