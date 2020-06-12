/*
   Horse class implementation
   derived class representing a horse as a mode of transport
*/


#ifndef HORSE_H
#define HORSE_H
#include "Transport.h"
#include <string>

class Horse: public Transport{
 public:
  //constructor takes name
  Horse(std::string namee);
  
  // overrides the pure-virtual get_dist_travelled function
  //virtual int get_dist_travelled(); // how far has it travelled
  virtual std::string get_name();

  // ride the horse for 3km
  virtual void ride();
  
 protected:
  std::string name;
};


#endif // HORSE_H
