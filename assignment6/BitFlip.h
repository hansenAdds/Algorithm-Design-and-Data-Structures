#ifndef BitFlip_h
#define BitFlip_h
#include "Individual.h"
#include "Mutator.h"
#include <string>

class BitFlip:public Mutator{//inher
	std::string Mutate(Individual &y, int k);
};
#endif
