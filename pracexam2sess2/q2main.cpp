#include "SortedQueue.h"


#include<iostream>
using namespace std;

int main(){

    SortedQueue s;

    //  add a few times
    s.add(1);
    s.add(4);
    s.add(3);
    s.add(2);

    // now remove a few times - should be in order.
    cout << s.remove() << endl;
    cout << s.remove() << endl;
    cout << s.remove() << endl;
    cout << s.remove() << endl;
    cout << s.remove() << endl;

    // now add a few times - last one won't work
    s.add(8);
    s.add(7);
    s.add(6);
    s.add(5);

    // now remove a few more times - last couple will be -1's.
    cout << s.remove() << endl;
    cout << s.remove() << endl;
    cout << s.remove() << endl;
    cout << s.remove() << endl;
    cout << s.remove() << endl;
    cout << s.remove() << endl;

}
