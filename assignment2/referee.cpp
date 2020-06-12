#include "human.h"
#include "computer.h"
#include "referee.h"
#include <string>
using namespace std;
referee::referee(){

}
referee::referee(string uu){
	u=uu;
}
string referee::compare(string n1,string n2){
	for(int i=0;i<n2.length();i++){
		if (n1[i]==n2[i]){
			u+="T ";
		}
		else if (n1[i]==83){
			u+="L ";
		}
		else if (n1[i]==80){
			u+="W ";
		}
	}
	return u;
}
referee::~referee(){

}