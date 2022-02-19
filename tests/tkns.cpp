#include "tkns.h"
#include <cplong.h>
#include <iostream>

using namespace std;
int tkns::difalt(){
	cplong a; long aval; int apl ; long eval; int epl;
	/////////
	cout << "tkns::difalt " ;
	a = cplong(0x5C,-1);
	aval = a.get_value(); apl = a.get_pl(); eval = 0x5C ; epl = -1;
	cout << "a is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tkns::difalt " ;
	a = cplong();
	aval = a.get_value(); apl = a.get_pl(); eval = 0x0 ; epl = 0;
	cout << "a is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tkns::difalt " ;
	a = cplong(cplong::min_long);
	aval = a.get_value(); apl = a.get_pl(); eval = cplong::min_long ; epl = 0;
	cout << " a is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tkns::difalt " ;
	a = cplong(cplong::meks_long);
	aval = a.get_value(); apl = a.get_pl(); eval = cplong::meks_long ; epl = 0;
	cout << " a is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////


	return 0;
}
