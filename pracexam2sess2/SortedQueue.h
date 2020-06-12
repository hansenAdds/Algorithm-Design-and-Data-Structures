/* 
   class for double ended stack of ints
   allows pushes and pops from both ends.
*/

#ifndef SORTEDQUEUE_H
#define SORTEDQUEUE_H

#define CAP 100

class SortedQueue{
 public:
  // constructor
  SortedQueue();

  // operators

  void add(int val); // adds val to the sorted queue
  int remove(); // removes val from the sorte queue

 private:
  int content[CAP]; // contents of the queue
  // state variables - depending on implementation you might not use all
  // of these!
  int head; // head of queue 
  int end; // end of queue (next spare spot - if any)
};

#endif //SORTEDQUEUE_H
