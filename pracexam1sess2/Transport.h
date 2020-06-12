/* 
  Transport:   a class representing anything that can be used for transport
*/

#ifndef TRANSPORT_H
#define TRANSPORT_H


class Transport{
 public:
  // constructor - no parameters at this level
  Transport();

  // getter methods
  virtual int get_dist_travelled(); // how far has it travelled
  virtual int get_age();   // age of transport
  virtual void birthday(); // increment age

 protected:
  // field variables
  int distance_travelled; // distance travelled in kms
  int age;                // age in years
};

#endif // TRANSPORT_H
