#include "BitFlip.h"
#include "Mutator.h"
#include "Individual.h"
using namespace std;
#include <string>

string BitFlip::Mutate(Individual &y,int k){
	//my way to BitFLip
	int i=y.getLength();
	if (k<=i){
		y.flipBit(k);
	}
	else{
		y.flipBit(k%i);
	}
	return y.getString();
}