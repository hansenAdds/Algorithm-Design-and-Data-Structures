#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"
using namespace std;

string Rearrange::Mutate(Individual &y, int k){
	if (k>y.getLength()){
		k-=y.getLength();
	}
	y.rearrange(k-1);
	return y.getString();
}