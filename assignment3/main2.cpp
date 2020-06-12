#include <string>
#include <iostream>
using namespace std;
#include "computer.h"
#include "bureaucrat.h"

int main(){
	string input;
	getline(cin,input);
	bureaucrat h;
	string computer_a=h.getter_s(input);
	cout<<computer_a<<endl;

}