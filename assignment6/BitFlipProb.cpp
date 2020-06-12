#include "Individual.h"
#include <cstdlib>
#include "Mutator.h"
#include "BitFlipProb.h"
using namespace std;

string BitFlipProb::Mutate(Individual &y,int k){
	for(int i=0;i<y.getLength();i++){
		int p=(rand()%k)+1;
		if (p==k){	 //using random nunber to set value 
			y.flipBit(i);
		}
	}// my way to do BitFlipProb
	return y.getString();
}