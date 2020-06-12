#include "Individual.h"
#include "Mutator.h"
#ifndef BitFlipProb_h
#define BitFlipProb_h

class BitFlipProb:public Mutator{
	std::string Mutate(Individual &y,int k);
};
#endif