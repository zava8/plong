#include "tknss.h"
#include <cplong.h>
#include <iostream>

using namespace std;
int tknss::tn(){
	cplong a; long aval; int apl ; long eval; int epl;
//////////////////////////////////////////
	cout << "tknss::tn " ;
	a = cplong("hX5.<");
	aval = a.get_value(); apl = a.get_pl(); eval = 0x5C ; epl = -1;
	cout << "hX5.< is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed1 " << endl; }
	else  { cout << " failed1 " << endl; return 0x1; }
//////////////////////////////////////////
	cout << "tknss::tn " ;
	a = cplong("hX5."); apl = a.get_pl(); eval = 0x5 ; epl = 0;
	aval = a.get_value();
	cout << "hX5. is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed1a " << endl; }
	else  { cout << " failed1a " << endl; return 0x1; }
//////////////////////////////////////////
//////////////////////////////////////////
	cout << "tknss::tn " ;
	a = cplong("hX500060.0000"); apl = a.get_pl(); eval = 0x50006 ; epl = 1;
	aval = a.get_value();
	cout << "hX500060.0000 is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed1b " << endl; }
	else  { cout << " failed1b " << endl; return 0x1; }
//////////////////////////////////////////
	cout << "tknss::tn " ;
	a = cplong("0");
	aval = a.get_value(); apl = a.get_pl(); eval = 0x0 ; epl = 0;
	cout << "0 is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed2 " << endl; }
	else  { cout << " failed2 " << endl; return 0x1; }
//////////////////////////////////////////
	cout << "tknss::tn " ;
	a = cplong("-hX7???????????????");
	aval = a.get_value(); apl = a.get_pl(); eval = cplong::min_long ; epl = 0;
	cout << " -hX7??????????????? is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed3 " << endl; }
	else  { cout << " failed3 " << endl; return 0x1; }
//////////////////////////////////////////
	cout << "tknss::tn " ;
	a = cplong("+hX7???????????????");
	aval = a.get_value(); apl = a.get_pl(); eval = cplong::meks_long ; epl = 0;
	cout << " +hX7??????????????? is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed4 " << endl; }
	else  { cout << " failed4 " << endl; return 0x1; }
//////////////////////////////////////////


	return 0;
}
int tknss::tndeci(){
	cplong a; long aval; int apl ; long eval; int epl;
////////////
	cout << "tknss::tndeci " ;
	a = cplong("5.75");
	aval = a.get_value(); apl = a.get_pl(); eval = 0x5C ; epl = -1;
	cout << " 5.75 is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed1 " << endl; }
	else  { cout << " failed1 " << endl; return 0x1; }
////////////
	cout << "tknss::tndeci " ;
	a = cplong("-5.75");
	aval = a.get_value(); apl = a.get_pl(); eval = -0x5C ; epl = -1;
	cout << " -5.75 is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed2 " << endl; }
	else  { cout << " failed2 " << endl; return 0x1; }
////////////
	cout << "tknss::tndeci " ;
	a = cplong("-9223372036854775807");
	aval = a.get_value(); apl = a.get_pl(); eval = cplong::min_long ; epl = 0;
	cout << " -9223372036854775807 is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed3 " << endl; }
	else  { cout << " failed3 " << endl; return 0x1; }
////////////
	cout << "tknss::tndeci " ;
	a = cplong("+9223372036854775807");
	aval = a.get_value(); apl = a.get_pl(); eval = cplong::meks_long ; epl = 0;
	cout << " +9223372036854775807 is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed4 " << endl; }
	else  { cout << " failed4 " << endl; return 0x1; }
////////////
////////////
	cout << "tknss::tndeci " ;
	a = cplong("-009223372036854775807.000");
	aval = a.get_value(); apl = a.get_pl(); eval = cplong::min_long ; epl = 0;
	cout << " -009223372036854775807.000 is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed5 " << endl; }
	else  { cout << " failed5 " << endl; return 0x1; }
////////////
	cout << "tknss::tndeci " ;
	a = cplong("+0009223372036854775807.000000");
	aval = a.get_value(); apl = a.get_pl(); eval = cplong::meks_long ; epl = 0;
	cout << " +0009223372036854775807.000000 is : " << a ;
	if((aval==eval) && (apl==epl)) { cout << " passed6 " << endl; }
	else  { cout << " failed6 " << endl; return 0x1; }
////////////


	return 0;
}
//------------
int tknss::ty(){
	cplong a; long aval; int apl ; long eval; int epl;
//////////////////////////////////////////
	cout << "tknss::ty " ;
	try { a = cplong("hX5.C");
		cout << " no thro so failed1 " << endl; return 0x1;
	} catch(const char* msg) { cout<<"passed1 throfor hX5.C. msg is: " << msg << endl ; }
//////////////////////////////////////////
	cout << "tknss::ty " ;
	try { a = cplong("0.0.");
		cout << " no thro so failed2 " << endl; return 0x1;
	} catch(const char* msg) { cout<<"passed2 throfor 0.0.. msg is: " << msg << endl ; }
//////////////////////////////////////////
	cout << "tknss::ty " ;
	try { a = cplong("-hX7??.?????.????????");
		cout << " no thro so failed3 " << endl; return 0x1;
	} catch(const char* msg) { cout<<"passed3 throfor -hX7??.?????.????????. msg is: " << msg << endl ; }
//////////////////////////////////////////
	cout << "tknss::ty " ;
	try { a = cplong("+hX0.7.???????????????");
		cout << " no thro so failed4 " << endl; return 0x1;
	} catch(const char* msg) { cout<<"passed4 throfor +hX0.7.???????????????. msg is: " << msg << endl ; }
//////////////////////////////////////////
	return 0;
}
int tknss::tydeci(){
	cplong a; long aval; int apl ; long eval; int epl;
////////////
	cout << "tknss::tydeci " ;
	try { a = cplong("98765432198.765432101");
		cout << " 98765432198.765432101 no thro so failed1 " << endl; return 0x1;
	} catch(const char* msg) { cout<<"passed1 throfor 98765432198.765432101. msg is: " << msg << endl ; }
////////////
	cout << "tknss::tydeci " ;
	try { a = cplong("-98765432198.765432101");
		cout << " -98765432198.765432101 no thro so failed2 " << endl; return 0x1;
	} catch(const char* msg) { cout<<"passed2 throfor -98765432198.765432101. msg is: " << msg << endl ; }
////////////
	cout << "tknss::tydeci " ;
	try { a = cplong("-9223372036854775808");
		cout << " -9223372036854775808 no thro so failed3 " << endl; return 0x1;
	} catch(const char* msg) { cout<<"passed3 throfor -9223372036854775808. msg is: " << msg << endl ; }
////////////
	cout << "tknss::tydeci " ;
	try { a = cplong("+9223372036854775808");
		cout << " +9223372036854775808 no thro so failed4 " << endl; return 0x1;
	} catch(const char* msg) { cout<<"passed4 throfor +9223372036854775808. msg is: " << msg << endl ; }
////////////
////////////
	cout << "tknss::tydeci " ;
	try { a = cplong("-0hX09223372036854775807.000");
		cout << " -0hX09223372036854775807.000 no thro so failed5 " << endl; return 0x1;
	} catch(const char* msg) { cout<<"passed5 throfor -0hX09223372036854775807.000. msg is: " << msg << endl ; }
////////////
	cout << "tknss::tydeci " ;
	try { a = cplong("+0hX09223372036854775807.000");
		cout << " +0hX09223372036854775807.000 no thro so failed6 " << endl; return 0x1;
	} catch(const char* msg) { cout<<"passed6 throfor +0hX09223372036854775807.000. msg is: " << msg << endl ; }
////////////


	return 0;
}
