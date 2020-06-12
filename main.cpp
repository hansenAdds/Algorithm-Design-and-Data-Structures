#include <iostream>
#include "Palindrome.h"
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string temp;
	Palindrome B(s);
	temp=B.removeNonLetters(s);   //standard class work
	temp=B.lowerCase(temp);
	cout<<B.isPalindrome(temp)<<endl;
}