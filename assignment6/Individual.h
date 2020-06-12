#ifndef Individual_h
#define Individual_h
#include <string>

class Individual{
public:
	int length;
	std::string DNA;
	Individual(int length);
	Individual(std::string newbinary);
std::string binaryString;	
std::string getString();
int getBit(int pos);
void flipBit(int pos);
void rearrange(int pos);
int getMaxOnes();
int getLength();
};
#endif