#include <iostream>
#include "cplong.h"


using namespace std;

int main() {
	cplong a(64,-1), b(8,0), c;
	cout<< "a is:" << a << endl;
	c = a/b;
	cout<< "c is:" << c << endl;

	cplong pb("5.75");
	cout<< "pb is:" << pb << endl;

	cplong g(0x5C,-1);
	cplong h;
	h = g * 1;
	cout<< "h is:" << h << endl;
	h *= h;
	cout<< "h is:" << h << endl;

	cplong a1(7), b1(3); cplong r1 = a1 % b1 ; cplong r2 = a1 / b1 ;
	cout<< "r1 is:" << r1 << " and r2 is:" << r2 <<  endl;

	cplong ll(cplong::min_long);
	cout<< "ll is:" << ll <<  endl;

return 0;
}
