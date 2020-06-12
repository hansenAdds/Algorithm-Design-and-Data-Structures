#ifndef bureaucrat_H
#define bureaucrat_H
#include "computer.h"

class bureaucrat: public computer{
	std::string e;
public:
	bureaucrat();
	bureaucrat(std::string ee);
	
};
#endif