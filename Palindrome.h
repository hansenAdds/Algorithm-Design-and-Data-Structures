#ifndef Palindrome_H
#define Palindrome_H
#include <string>
class Palindrome{
	std::string input;
public:
	Palindrome();					//standard class work
	Palindrome(std::string Ninput);
	std::string removeNonLetters(std::string Ninput);
	std::string lowerCase(std::string Ninput);
	std::string isPalindrome(std::string Ninput);
	~Palindrome();

};
#endif