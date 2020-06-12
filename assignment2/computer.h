#ifndef computer_H
#define computer_H
#include <string>
class computer{
int k;
std::string w;
public:
	computer();
	computer(std::string ww);
	std::string getter(std::string ww);
	~computer();
};
#endif