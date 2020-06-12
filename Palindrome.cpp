#include<iostream>
#include "Palindrome.h"
using namespace std;
Palindrome::Palindrome(){
	input="fghjkhj";
}
Palindrome::Palindrome(string Ninput){
	input=Ninput;
}
string Palindrome::removeNonLetters(string Ninput){
		
	string x;
	
	for(int i=0;i<Ninput.length();i++){
	
		if((Ninput[i]>=97&&Ninput[i]<=122)||(Ninput[i]>=65&&Ninput[i]<=90)){  //using ascii number to flite 
			x+=Ninput[i];
		}
		
	}
	return x;

}
string Palindrome::lowerCase(string x){
		string z;
	
	for(int i=0;i<x.length();i++){
		if (x[i]>=65&&x[i]<=90){   //high case change to lowcase
			z+=x[i]+32;
			
		}
		else{
			z+=x[i];
		}
	
	}
	return z;
}
string Palindrome::isPalindrome(string Ninput){
	string yes="Yes";
	string nott="No";
	for(int i=0;i<Ninput.length();i++){
			if(Ninput[i]-Ninput[Ninput.length()-1]==0){  // palindrome code !!
				return yes;
			}
			else{
				return nott;
			}
		
	}
}
Palindrome::~Palindrome(){

}