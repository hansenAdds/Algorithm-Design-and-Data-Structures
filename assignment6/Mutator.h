#ifndef Mutator_h
#define Mutator_h
#include "Individual.h"
class Mutator{
public:
	virtual std::string Mutate(Individual &y, int k)=0;
};
#endif//virtual function set