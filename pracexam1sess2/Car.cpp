/*
Car implementation
Implements methods of class for car
*/

#include "Car.h"
#include "Transport.h"
#include <string>
using namespace std;

Car::Car(int registrationn){  // i set a registraitonn ,
	registration=registrationn; //using registration=registrationn
}
int Car::get_rego(){
	return registration; //return 
}
void Car::drive(int dist){
	distance_travelled+=dist;// distance_
}
// put your implementations of the appropriate header functions here..


