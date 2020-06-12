/*
   Car class implementation
   derived class representing a car as a mode of transport
*/


#ifndef CAR_H
#define CAR_H
#include "Transport.h"

class Car: public Transport{
 public:
  //constructor takes name
  Car(int registrationn);
  
  // overrides the pure-virtual get_dist_travelled function
  //virtual int get_dist_travelled(); // how far has it travelled
  virtual int  get_rego();  // get the registration number

  // drive the car for  dist km
  virtual void drive(int dist);
  
 protected:
  int registration;
};


#endif // CAR_H
