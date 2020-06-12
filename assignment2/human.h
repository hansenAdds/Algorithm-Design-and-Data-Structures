#ifndef human_H
#define human_H
#include <string>
class human{
	int k;
	std::string x;
public:
	human();
	human(std::string xx);
	std::string gett(std::string xx);
	~human();
};
#endif