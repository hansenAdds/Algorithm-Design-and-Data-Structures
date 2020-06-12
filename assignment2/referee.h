#ifndef referee_H
#define referee_H
#include "human.h"
#include "computer.h"
#include <string>
class referee{
	std::string u;
public:
	referee();
	referee(std::string uu);
	std::string compare(std::string n1,std::string n2);
	~referee();


};
#endif