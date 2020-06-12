#include "Individual.h"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

Individual::Individual(int length){
	for(int i=0;i<length;i++){
		binaryString+="0";//set all zero
	}
}
Individual::Individual(string newbinary){
	binaryString=newbinary;
    length=binaryString.length();//set new length
}
string Individual::getString(){
	return binaryString;
}

int Individual::getBit(int pos){
	if (pos>=DNA.length()-1&&pos<0){
		return -1;
	}
	else{
		return binaryString[pos];
		
	}
}
void Individual::flipBit(int pos){
	if (binaryString[pos-1]=='1'){//flip the value 1 to 0
		binaryString[pos-1]='0';
	}
	else if (binaryString[pos-1]=='0'){//0 to 1
		binaryString[pos-1]='1';
	}
}
void Individual::rearrange(int pos){
	string::iterator b=binaryString.begin();
	binaryString.insert(b,b+pos,binaryString.end());
	binaryString.erase(length,length-pos+1);
	
}
int Individual::getMaxOnes(){
	int count=0;
	int temp=0;
	for(int i=0;i<binaryString.length();i++){
		if (binaryString[i]==49){//smart way to do max one
			count++;
			if (temp<count){
				temp=count;
			}
		}
		else{
			count=0;
		}
	}
	return temp;
}
int Individual::getLength(){
	return binaryString.length();
}
