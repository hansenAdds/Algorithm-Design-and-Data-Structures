#include "human.h"
#include <string>
using namespace std;
human::human(){
	k=1;
}
human::human(string xx){
	x=xx;
}
string human::gett(string xx){

	for(int i=1;i<xx.length()+1;i++){
		x+=xx[i];
	}
	return x;
}
human::~human(){

}