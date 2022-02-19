#include "tadd.h"
#include <cplong.h>
#include <iostream>

using namespace std;
int tadd::tn0(){
	cplong a , b, ar, er;
	/////////
	cout << "tadd::tn0 " ;
	a = cplong(0x0,-1); b = cplong(0x0,8); er = cplong();
	ar = a + b ;
	cout << a << " + " << b << " = " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tadd::tn0 " ;
	a = cplong(0x0,-1); b = cplong(-0x1,0); er = cplong(-0x1,0);
	ar = a + b ;
	cout << a << " + " << b << " = " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tadd::tn0 " ;
	a = cplong(0x0,-1); b = cplong(0x1,0); er = cplong(0x1,0);
	ar = a + b ;
	cout << a << " + " << b << " = " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tadd::tn0 " ;
	a = cplong(0x1,0); b = cplong(-0x1,0); er = cplong();
	ar = a + b ;
	cout << a << " + " << b << " = " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tadd::tn0 " ;
	a = cplong(0x1,0); b = cplong(0x1,0); er = cplong(2,0);
	ar = a + b ;
	cout << a << " + " << b << " = " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tadd::tn0 " ;
	a = cplong(-0x1,0); b = cplong(-0x1,0); er = cplong(-2,0);
	ar = a + b ;
	cout << a << " + " << b << " = " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	return 0;
}
//////////////////////////////
int tadd::mekslong(){
	cplong a , b, ar, er;
	/////////
	cout << "tadd::mekslong " ;
	a = cplong(cplong::meks_long-1,0); b = cplong(0x1,0); er = cplong(cplong::meks_long,0);
	ar = a + b ;
	cout << a << " + " << b << " = " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tadd::mekslong " ;
	a = cplong(cplong::meks_long,0); b = cplong(0,0); er = cplong(cplong::meks_long,0);
	ar = a + b ;
	cout << a << " + " << b << " = " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	return 0;
}
int tadd::minlong(){
	cplong a , b, ar, er;
	/////////
	cout << "tadd::minlong " ;
	a = cplong(cplong::min_long,0); b = cplong(0,0); er = cplong(cplong::min_long,0);
	ar = a + b ;
	cout << a << " + " << b << " = " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x3; }
	/////////
	cout << "tadd::minlong " ;
	a = cplong(cplong::min_long+1,0); b = cplong(-0x1,0); er = cplong(cplong::min_long,0);
	ar = a + b ;
	cout << a << " + " << b << " = " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	////////

	return 0;
}
//////////////////////////////

int tadd::mekslongthro(){
	cplong a , b, ar, er;
	/////////
	cout << "tadd::mekslongthro " ;
	a = cplong(cplong::meks_long,0); b = cplong(0x1,0); er = cplong(cplong::meks_long,0);
	try {

		cout << "trying "<< a << " + " << b ;
		ar = a + b ;
		cout << a << " + " << b << " = " << ar << " and er is : " << er ;
		if(ar==er) { cout << " nothro failed  " << endl; }
		else  { cout << " failed " << endl; return 0x1; }
	} catch(const char* msg) {
		cout << " .throw is good test passed" << endl;
	}
	////////
	/////////
	cout << "tadd::mekslongthro " ;
	a = cplong(cplong::meks_long-1,0); b = cplong(0x2,0); er = cplong(cplong::meks_long,0);
	try {
		cout << "trying "<< a << " + " << b ;
		ar = a + b ;
		cout << a << " + " << b << " = " << ar << " and er is : " << er ;
		if(ar==er) { cout << " nothro failed " << endl; }
		else  { cout << " failed " << endl; return 0x1; }
	} catch(const char* msg) {
		cout << " .throw is good test passed" << endl;
	}
	////////

	return 0;
}
int tadd::minlongthro(){
	cplong a , b, ar, er;
	/////////
	cout << "tadd::minlongthro " ;
	a = cplong(cplong::min_long); b = cplong(-0x1); er = cplong(cplong::min_long,0);
	try {
		cout << "trying "<< a << " + " << b ;
		ar = a + b ;
		cout << a << " + " << b << " = " << ar << " and er is : " << er ;
		if(ar==er) { cout << " nothro failed " << endl; }
		else  { cout << " failed " << endl; return 0x1; }
	} catch(const char* msg) {
		cout << " . throw is good test passed" << endl;
	}
	////////
	cout << "tadd::minlongthro " ;
	a = cplong(cplong::min_long+1); b = cplong(-0x2); er = cplong(cplong::min_long,0);
	try {
		cout << "trying "<< a << " + " << b ;
		ar = a + b ;
		cout << a << " + " << b << " = " << ar << " and er is : " << er ;
		if(ar==er) { cout << " nothro failed " << endl; }
		else  { cout << " failed " << endl; return 0x1; }
	} catch(const char* msg) {
		cout << " . throw is good test passed" << endl;
	}
	////////

	return 0;
}


