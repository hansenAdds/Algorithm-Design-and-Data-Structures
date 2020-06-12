#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(){
	vector <int> rec;
	string inp;
	getline(cin,inp);
	string fuck=", ";
	size_t pos=inp.find(fuck);
	size_t sta=0;
	while(pos !=string::npos){
		string temp=inp.substr(sta,pos-sta);
		rec.push_back(stoi(temp));
		sta=pos+1;
		pos=inp.find(fuck,sta);
	}
	rec.push_back(stoi(inp.substr(sta)));

	MapAbsoluteValue A;
	vector <int >tt=A.map(rec);
	MapTriple B;
	vector <int>ttt=B.map(tt);
	FilterForTwoDigitPositive C;
	vector <int>tttt=C.filter(ttt);
	FilterOdd D;
	vector <int>ttttt=D.filter(tttt);
	ReduceMinimum E;
	int min=E.reduce(ttttt);
	ReduceGCD F;
	int gcd=F.reduce(ttttt);
	cout<<min<<" "<<gcd;
}