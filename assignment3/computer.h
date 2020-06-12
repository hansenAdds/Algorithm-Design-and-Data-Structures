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
	std::string getter_p(std::string ww);
	std::string getter_s(std::string ww);
	~computer();
};
#endif