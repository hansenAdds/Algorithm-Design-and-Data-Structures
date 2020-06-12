#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;
#include <iostream>
#include <string>

Individual* execute(Individual* indPtr,Mutator* mPtr,int k){
mPtr->Mutate(* indPtr,k);
return indPtr;
}
int main(){
	string binarystr1;
	cin>>binarystr1;
	int k1;
	cin>>k1;
	string binarystr2;  //general input
	cin>>binarystr2;
	int k2;
	cin>>k2;

	Individual *fst=new Individual(binarystr1);
	Individual *sec=new Individual(binarystr2); //point out
	Mutator *thir=new BitFlip();
	Mutator *four=new Rearrange();

	cout<<execute(fst,thir,k1)->getString()<<" ";
	cout<<execute(sec,four,k2)->getString()<<" ";//cout
	cout<<sec->getMaxOnes()<<endl;


}