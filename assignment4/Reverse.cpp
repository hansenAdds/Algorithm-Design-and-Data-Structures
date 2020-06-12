#include "Reverse.h"
#include <iostream>
#include <string>
using namespace std;



int Reverse::reverseDigit(int value){
	static int temp ,sum;
	if (value>0){
		temp=value%10;
		sum=sum*10+temp;
		reverseDigit(value/10);
	}
	//reverse digit
	else{
		return sum;
	}

	


	
}
string Reverse::reverseString(string letters){
	if (letters.length()<=1){
		return letters;
	}
	//reverse string using recursion
	else{
		return reverseString(letters.substr(1,letters.length()))+letters.at(0);
	
	}
	
}
