/*
transport implementation
Implements methods of class for mode of transport
*/

#include "Transport.h"
using namespace std;
#include <string>

Transport::Transport(){
	age=0; 					// set age is 0
	distance_travelled=0;	//set distance is 0;
}
int Transport::get_dist_travelled(){
	return distance_travelled;		//return dis
}
int Transport::get_age(){
	return age; 		//return age
}
void Transport::birthday(){
	age++;			//increment
}
// put your implementations of the appropriate header functions here..
