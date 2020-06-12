#include <iostream>
using namespace std;
#include <string>
#include "human.h"
#include "computer.h"
#include "referee.h"

int main(){
	string input;
	getline(cin,input);
	human k;
	string human_a=k.gett(input);
	computer j;
	string computer_a=j.getter(input);
	referee z;
	string referee_a=z.compare(human_a,computer_a);
	cout<<referee_a;
}