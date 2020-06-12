#include <string>
#include "Reverse.h"
#include "Fibonacci.h"
#include "EfficientFibonacci.h"
using namespace std;
#include <iostream>
bool test(string input){
	for(int i=0;i<input.length();i++){
		if ((input[i]>=48)&&(input[i]<=57)){//this one is for validation
			return true;
		}
	
		else{
			return false;
		}
	}
}


int main(){
	int a;
	int b;
	int c;
	int d;
	
	
	string inp;
	string inpp;
	string inppp;
	string inpppp;
	string second;
	string third;
	string fifth;
	string last;
	Reverse revv;
	Fibonacci bbb;
	EfficientFibonacci aaa;
	cin>>inp;
	string y=" ";
	a=inp.find_first_of(y);//get location or first space 
	second=inp.substr(0,a);//divide string to small one

	
	if (test(second)==true){
	cout<<to_string(revv.reverseDigit(stoi(second)))<<y;//reverse digit
	}
	else{
		cout<<"ERROR"<<y;//if not print ERROR
	}

	cin>>inpp;
	b=inpp.find(y,a+1);
	third=inpp.substr(a+1 ,b);
	
	cout<<revv.reverseString(third)<<y;//reverse string 
	

	cin>>inppp;
	c=inppp.find(y,b+1);
	fifth=inppp.substr(b+1,c);
	if (test(fifth)==true){
		cout<<bbb.caculate(stoi(fifth))<<y;//caculate fibonacci
	}
	else{
		cout<<"ERROR"<<y;
	}

	cin>>inpppp;
	d=inpppp.find(y,c+1);
	last=inpppp.substr(c+1,d);
		if (test(last)==true){
		cout<<aaa.cacula(stoi(last));//efficient fibonacci
	}
	else{
		cout<<"ERROR";
	}
	

	
	


}	

	


