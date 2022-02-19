#include "tcmp.h"
#include <cplong.h>
#include <iostream>

using namespace std;
int tcmp::near0(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::near0 " ;
	a = cplong(0); b = cplong(0); er = true;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near0 " ;
	a = cplong(0); b = cplong(0); er = false;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near0 " ;
	a = cplong(0); b = cplong(0); er = false;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near0 " ;
	a = cplong(0); b = cplong(0); er = true;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near0 " ;
	a = cplong(0); b = cplong(0); er = false;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near0 " ;
	a = cplong(0); b = cplong(0); er = true;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
int tcmp::poz10(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::poz10 " ;
	a = cplong(1); b = cplong(0); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz10 " ;
	a = cplong(1); b = cplong(0); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz10 " ;
	a = cplong(1); b = cplong(0); er = true;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz10 " ;
	a = cplong(1); b = cplong(0); er = true;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz10 " ;
	a = cplong(1); b = cplong(0); er = false;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz10 " ;
	a = cplong(1); b = cplong(0); er = false;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
int tcmp::neg10(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::neg10 " ;
	a = cplong(-1); b = cplong(0); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg10 " ;
	a = cplong(-1); b = cplong(0); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg10 " ;
	a = cplong(-1); b = cplong(0); er = false;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg10 " ;
	a = cplong(-1); b = cplong(0); er = false;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg10 " ;
	a = cplong(-1); b = cplong(0); er = true;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg10 " ;
	a = cplong(-1); b = cplong(0); er = true;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
int tcmp::negpoz1(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::negpoz1 " ;
	a = cplong(-1); b = cplong(1); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::negpoz1 " ;
	a = cplong(-1); b = cplong(1); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::negpoz1 " ;
	a = cplong(-1); b = cplong(1); er = false;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::negpoz1 " ;
	a = cplong(-1); b = cplong(1); er = false;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::negpoz1 " ;
	a = cplong(-1); b = cplong(1); er = true;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::negpoz1 " ;
	a = cplong(-1); b = cplong(1); er = true;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
	/////////
int tcmp::poz12(){
	cplong a , b; bool ar, er;
	cout << "tcmp::poz12 " ;
	a = cplong(1); b = cplong(2); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz12 " ;
	a = cplong(1); b = cplong(2); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz12 " ;
	a = cplong(1); b = cplong(2); er = false;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz12 " ;
	a = cplong(1); b = cplong(2); er = false;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz12 " ;
	a = cplong(1); b = cplong(2); er = true;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz12 " ;
	a = cplong(1); b = cplong(2); er = true;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
int tcmp::poz1mekslong(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::poz1mekslong " ;
	a = cplong(1); b = cplong(cplong::meks_long); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz1mekslong " ;
	a = cplong(1); b = cplong(cplong::meks_long); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz1mekslong " ;
	a = cplong(1); b = cplong(cplong::meks_long); er = false;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz1mekslong " ;
	a = cplong(1); b = cplong(cplong::meks_long); er = false;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz1mekslong " ;
	a = cplong(1); b = cplong(cplong::meks_long); er = true;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz1mekslong " ;
	a = cplong(1); b = cplong(cplong::meks_long); er = true;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
int tcmp::neg12(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::neg12 " ;
	a = cplong(-1); b = cplong(-2); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg12 " ;
	a = cplong(-1); b = cplong(-2); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg12 " ;
	a = cplong(-1); b = cplong(-2); er = true;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg12 " ;
	a = cplong(-1); b = cplong(-2); er = true;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg12 " ;
	a = cplong(-1); b = cplong(-2); er = false;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg12 " ;
	a = cplong(-1); b = cplong(-2); er = false;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
int tcmp::neg1minlong(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::neg1minlong " ;
	a = cplong(-1); b = cplong(cplong::min_long); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg1minlong " ;
	a = cplong(-1); b = cplong(cplong::min_long); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg1minlong " ;
	a = cplong(-1); b = cplong(cplong::min_long); er = true;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg1minlong " ;
	a = cplong(-1); b = cplong(cplong::min_long); er = true;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg1minlong " ;
	a = cplong(-1); b = cplong(cplong::min_long); er = false;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg1minlong " ;
	a = cplong(-1); b = cplong(cplong::min_long); er = false;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
	/////////
	/////////
int tcmp::neg1mekslong(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::neg1mekslong " ;
	a = cplong(-1); b = cplong(cplong::meks_long); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg1mekslong " ;
	a = cplong(-1); b = cplong(cplong::meks_long); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg1mekslong " ;
	a = cplong(-1); b = cplong(cplong::meks_long); er = false;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg1mekslong " ;
	a = cplong(-1); b = cplong(cplong::meks_long); er = false;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg1mekslong " ;
	a = cplong(-1); b = cplong(cplong::meks_long); er = true;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::neg1mekslong " ;
	a = cplong(-1); b = cplong(cplong::meks_long); er = true;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
int tcmp::poz1minlong(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::poz1minlong " ;
	a = cplong(1); b = cplong(cplong::min_long); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz1minlong " ;
	a = cplong(1); b = cplong(cplong::min_long); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz1minlong " ;
	a = cplong(1); b = cplong(cplong::min_long); er = true;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz1minlong " ;
	a = cplong(1); b = cplong(cplong::min_long); er = true;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz1minlong " ;
	a = cplong(1); b = cplong(cplong::min_long); er = false;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::poz1minlong " ;
	a = cplong(1); b = cplong(cplong::min_long); er = false;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
int tcmp::near_mekslong(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::near_mekslong " ;
	a = cplong(cplong::meks_long-1); b = cplong(cplong::meks_long); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near_mekslong " ;
	a = cplong(cplong::meks_long-1); b = cplong(cplong::meks_long); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near_mekslong " ;
	a = cplong(cplong::meks_long-1); b = cplong(cplong::meks_long); er = false;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near_mekslong " ;
	a = cplong(cplong::meks_long-1); b = cplong(cplong::meks_long); er = false;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near_mekslong " ;
	a = cplong(cplong::meks_long-1); b = cplong(cplong::meks_long); er = true;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near_mekslong " ;
	a = cplong(cplong::meks_long-1); b = cplong(cplong::meks_long); er = true;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
int tcmp::near_minlong(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::near_minlong " ;
	a = cplong(cplong::min_long+1); b = cplong(cplong::min_long); er = false;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near_minlong " ;
	a = cplong(cplong::min_long+1); b = cplong(cplong::min_long); er = true;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near_minlong " ;
	a = cplong(cplong::min_long+1); b = cplong(cplong::min_long); er = true;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near_minlong " ;
	a = cplong(cplong::min_long+1); b = cplong(cplong::min_long); er = true;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near_minlong " ;
	a = cplong(cplong::min_long+1); b = cplong(cplong::min_long); er = false;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::near_minlong " ;
	a = cplong(cplong::min_long+1); b = cplong(cplong::min_long); er = false;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
	/////////
int tcmp::meks_meks(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::meks_meks " ;
	a = cplong(cplong::meks_long); b = cplong(cplong::meks_long); er = true;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::meks_meks " ;
	a = cplong(cplong::meks_long); b = cplong(cplong::meks_long); er = false;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::meks_meks " ;
	a = cplong(cplong::meks_long); b = cplong(cplong::meks_long); er = false;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::meks_meks " ;
	a = cplong(cplong::meks_long); b = cplong(cplong::meks_long); er = true;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::meks_meks " ;
	a = cplong(cplong::meks_long); b = cplong(cplong::meks_long); er = false;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::meks_meks " ;
	a = cplong(cplong::meks_long); b = cplong(cplong::meks_long); er = true;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
int tcmp::min_min(){
	cplong a , b; bool ar, er;
	/////////
	cout << "tcmp::min_min " ;
	a = cplong(cplong::min_long); b = cplong(cplong::min_long); er = true;
	ar = (a==b) ;
	cout << a << " == " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::min_min " ;
	a = cplong(cplong::min_long); b = cplong(cplong::min_long); er = false;
	ar = (a != b) ;
	cout << a << " != " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::min_min " ;
	a = cplong(cplong::min_long); b = cplong(cplong::min_long); er = false;
	ar = (a>b) ;
	cout << a << " > " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::min_min " ;
	a = cplong(cplong::min_long); b = cplong(cplong::min_long); er = true;
	ar = (a>=b) ;
	cout << a << " >= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::min_min " ;
	a = cplong(cplong::min_long); b = cplong(cplong::min_long); er = false;
	ar = (a < b) ;
	cout << a << " < " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////
	cout << "tcmp::min_min " ;
	a = cplong(cplong::min_long); b = cplong(cplong::min_long); er = true;
	ar = (a <= b) ;
	cout << a << " <= " << b << " is : " << ar << " and er is : " << er ;
	if(ar==er) { cout << " passed " << endl; }
	else  { cout << " failed " << endl; return 0x1; }
	/////////

	return 0;
}
//////////////
