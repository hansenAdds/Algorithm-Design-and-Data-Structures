#ifndef Rearrange_h
#define Rearrange_h
#include "Individual.h"
#include "Mutator.h"

class Rearrange:public Mutator{
	std::string Mutate(Individual &y,int k);
};
#endif