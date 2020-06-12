#include "computer.h"
#include <string>
using namespace std;
computer::computer(){
	k=1;
}
computer::computer(string ww){
	w=ww;
}
string computer::getter(string ww){
	for(int i=0;i<ww.length();i++){
		w+="R";
	}
	return w;
}
string computer::getter_p(string ww){
	for(int i=0;i<ww.length();i++){
		w+="P";
	}
	return w;
}
string computer::getter_s(string ww){
for(int i=0;i<ww.length();i++){
		w+="S";
	}
	return w;
}
computer::~computer(){

}