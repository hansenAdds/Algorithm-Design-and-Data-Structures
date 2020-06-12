/*
Horse implementation
Implements methods of class for horse
*/
#include "Transport.h"
#include "Horse.h"
#include <string>
using namespace std;


Horse::Horse(string namee){ // i set a new name "namee",then name qual namee;
	name=namee;
}
string Horse::get_name(){
	return name;//return name
}
void Horse::ride(){
	distance_travelled+=3; //each time distance plus 3
}


// put your implementations of the appropriate header functions here..

