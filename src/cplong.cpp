#include <iostream>
#include <sstream>
#include <cstring>
#include <cmath>
//#include <limits>
#include "cplong.h"

using namespace std;
int cplong::minimum_pl = -0xF;

const long cplong::min_long = diph_long_min;
const long cplong::meks_long = diph_long_meks;
const long cplong::nmbr_dec_dizits_long_meks = _nmbr_dec_dizits_long_meks_;
const long cplong::nmbr_heks_dizits_long_meks = _nmbr_heks_dizits_long_meks_;
const int cplong::pl_dec_phur_divizn = _nmbr_heks_dizits_long_meks_;

cplong::cplong(const long aval, const int apl) {
	if(0 == aval) { this->value = 0; this->pl = 0; } else {
		if(aval<cplong::min_long) { throw "aval<min_long"; }
		else if(aval>cplong::meks_long) { throw "aval>meks_long"; }
		else {
			this->value = aval; this->pl = apl; this->trim_ziroz();
		}
	}
}

cplong::cplong(const string& str_plong){
	string s = str_plong; int slength = s.length(); int slength_meks = 0 ;
	unsigned long tempval=0; int c; unsigned long cutoff; int base = 10;
	int return_nao_val = 0;
	int neg = 0, pointsinstring = 0, curr_indeks=0, any=0, cutlim ; //temppl=0;
	if(
			(s=="0") || (s=="+0") || (s=="-0") ||
			(s=="hX0") || (s=="+hX0") || (s=="-hX0") ||
			(s==".0") || (s=="+.0") || (s=="-.0") ||
			(s=="hX.0") || (s=="+hX.0") || (s=="-hX.0")
	) { value = 0; pl = 0; return_nao_val = 1; goto _label_return_nao_ ; }
	else if(
			(s=="") || (s=="-") || (s=="+") ||
			(s==".") || (s=="-.") || (s=="+.") ||
			(s=="hX") || (s=="-hX") || (s=="+hX") ||
			(s=="hX.") || (s=="-hX.") || (s=="+hX.")
	) { return_nao_val = 2; throw "thro_not_plong_str" ; goto _label_return_nao_ ;}
	else {
		if (s.find('.') != std::string::npos) {
			s.erase(s.find_last_not_of('0')+1, s.size()-1);
			slength_meks += 1 ;
		}
		slength = s.length();
		c = s.at(curr_indeks);
		if(c == '-') { neg = 1; curr_indeks += 1 ; slength_meks += 1 ;}
		else if (c == '+') { curr_indeks += 1 ; slength_meks += 1 ;}
		c = s.at(curr_indeks);
		if(c == 'h') {
			curr_indeks += 1 ; slength_meks += 1 ; c = s.at(curr_indeks);
			if(c == 'X') {
				base = 0x10;
				curr_indeks += 1 ;
				slength_meks += 1 ;
			}
			else { return_nao_val = 2; throw "kns_str_thro_h_but_no_x" ; goto _label_return_nao_ ;}
		}
		if(0x10 == base) { slength_meks += cplong::nmbr_heks_dizits_long_meks ; }
		else { slength_meks += cplong::nmbr_dec_dizits_long_meks ; }
		s.erase(curr_indeks,s.find_first_not_of('0',curr_indeks)-curr_indeks); // viml
		if(s.length()>slength_meks) { return_nao_val = 2; throw "kns_str_thro_dizits_ovrplho" ; goto _label_return_nao_ ;}
		cutoff = neg ? -(unsigned long)diph_long_min : diph_long_meks;
		cutlim = cutoff % (unsigned long)base;
		cutoff /= (unsigned long)base;
		pl = 0 ;
		slength = s.length();
		for (int i = curr_indeks; i < slength; ++i) {
			c = s[i];
			if(c == '.') {
				if(pointsinstring == 0) { pl = -(slength-1-i) ; pointsinstring = 1 ; continue ; }
				else { return_nao_val = 2; throw "not_plong_str_2dot"; goto _label_return_nao_; }
			}

			if (c >= '0' && c <= '?') { c -= '0'; }
			else {
            switch(c)
            {
               case 'L' : case 'A' : case 'a' : c = 0xA ; break ;
               case 'J' : case 'B' : case 'b' : c = 0xB ; break ;
               case 'Q' : case 'C' : case 'c' : c = 0xC ; break ;
               case 'W' : case 'D' : case 'd' : c = 0xD ; break ;
               case 'X' : case 'E' : case 'e' : c = 0xE ; break ;
               case 'F' : case 'f' : c = 0xF ; break ;
               default :
                  return_nao_val = 2;
                  throw "not_plong_dizit_str";
                  goto _label_return_nao_;
                  break;
            }
			}
			if ( c >= base )
				{ return_nao_val = 2; throw "not_plong_basedizit_str"; goto _label_return_nao_; }
			if (any < 0 || tempval > cutoff || (tempval == cutoff && c > cutlim)) { any = -1; }
			else {
				any = 1;
				if(0x10 == base) { tempval = tempval << 4;} else { tempval *= 10 ;}
				tempval += c;
			}
		}
		if (any < 0) {
			tempval = neg ? cplong::min_long : cplong::meks_long;
//			cout << "in cplong::cplong(const string& str_plong) str_knstrktr_range_overphlo eksepsn" << endl ;
//			cout << "throing range overplo eksepsn" << endl ;
			return_nao_val = 2; throw "str_knstrktr_range_overphlo"; goto _label_return_nao_;
		}
		else if (neg) tempval = -tempval;
		if((0x10 == base)||(0==pl)) {
			cplong temp(tempval,pl);
			value = temp.value; pl = temp.pl;
			this->trim_ziroz();
		}
		else { // cout << "base is : " << base << " and pl is : -" << -pl << endl ;
			cplong nr(tempval,0);
			long longdr = pow(10, -pl) ;
			cplong dr(longdr,0); // cout << "nr is : " << nr << " and dr is : " << dr << endl;
			cplong temp = nr/dr ;
			value = temp.value; pl = temp.pl; this->trim_ziroz();
		}
	}
	_label_return_nao_: ;
}

long cplong::get_value(){return value;}
long cplong::get_pl(){return pl;}

string cplong::to_string() { ostringstream ss; ss << this; return ss.str(); }
std::ostream& operator<<(std::ostream& os, const cplong& aplong)
{
	os << hex << uppercase;
	if(0>aplong.value) { os << "-" << -aplong.value ; }
	else { os << aplong.value ; }
	if(0>aplong.pl) {	os << "." << "-" << -aplong.pl ; }
	else {	os << "." << aplong.pl  ; }
	return os;
}


int cplong::inc_pl(int to_pl){
  if( pl < to_pl ){
    if(value != 0){
      	long pozitiv_value; long pozitiv_remainder; long or_bits_mask = 1;
      	bool isneg = (value < 0); // handling negatve nmbr bit siphting
      	if(isneg) { pozitiv_value = -value; } else { pozitiv_value = value; }
    	int gap_pl = to_pl - pl;
    	or_bits_mask = ( or_bits_mask << (4*gap_pl) ) -1;
      	pozitiv_remainder = pozitiv_value | or_bits_mask;
      	pozitiv_value = pozitiv_value >> (4*gap_pl) ; // bitshift of +ve is defined
        if(isneg) { value = -pozitiv_value; } else { value = pozitiv_value; }
        pl = to_pl ;
        return pozitiv_remainder;
    } else { pl = to_pl ; return -1; }
  } else { return -1; }
}
int cplong::dec_pl(int to_pl){
	int long_size = (int)(sizeof(long)) ;
	bool isneg_value = false; long value_pozitiv = value;
	if(value < 0) { isneg_value = true; value_pozitiv = -value; }
	if(pl > to_pl){
		if(value_pozitiv != 0){
			int bitsize = cplong::bitsize(value_pozitiv) ;
			int gap_pl = pl - to_pl ;
			if( (bitsize + 4*gap_pl) < long_size*8 ){
				value_pozitiv = value_pozitiv << (4*gap_pl) ;
				pl = to_pl ;
				if(isneg_value) {value = -value_pozitiv ; } else { value = value_pozitiv ; }
				return pl;
			} else {
				int gap_pl_zust1less = (long_size*8 - 1 -bitsize)/4 ;
				int recurse_to_pl = pl - gap_pl_zust1less  ;
				value_pozitiv = value_pozitiv << (4*gap_pl_zust1less) ;
				pl = recurse_to_pl ;
				if(isneg_value) {value = -value_pozitiv ; } else {value = value_pozitiv ; }
				return pl;
			}
		} else { return to_pl; }
	} else { return to_pl; }
}
int cplong::trim_ziroz(){
	register int zeroztrimd = 0 ;
	while( (0 != value) && (!(value & 0xF)) ){
		bool isneg = (value < 0); // handling negatve nmbr bit siphting
		value = value >> 4;
        if(isneg && (value > 0)) {value = -value;} // handling negatve nmbr bit siphting
		pl += 1; ++zeroztrimd;
	}
	return zeroztrimd;
}

bool cplong::operator ==(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;  along.trim_ziroz(); blong.trim_ziroz();
	if((along.pl != blong.pl) || (along.value != blong.value)) { return false; } else { return true; }
}
bool cplong::operator !=(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;along.trim_ziroz(); blong.trim_ziroz();
	if((along.pl != blong.pl) || (along.value != blong.value)) { return true; } else { return false; }
}
bool cplong::operator >(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ; long apozitiv_remainder=0; long bpozitiv_remainder=0;
	if( (along.value > 0) && (0 > blong.value) ) { return true; }
	else if( (blong.value > 0) && (0 > along.value) ) { return false; }
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(along.pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	if(pl_dec_to > along.pl) { apozitiv_remainder = along.inc_pl(pl_dec_to); }
	else if(pl_dec_to > blong.pl) { bpozitiv_remainder = blong.inc_pl(pl_dec_to); }
	if(along.value-bpozitiv_remainder > blong.value-apozitiv_remainder) { return true; }
	return false;
}
bool cplong::operator >=(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ;
	if((along == blong) || (along>blong)) { return true; }
	return false;
}
bool cplong::operator <(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;
	if((along == blong) || (along>blong)) { return false; }
	return true;
}
bool cplong::operator <=(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;
	if(along > blong) { return false; }
	return true;
}


cplong cplong::operator+(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;
	along.trim_ziroz(); blong.trim_ziroz();
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(along.pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	if(pl_dec_to > along.pl) { along.inc_pl(pl_dec_to); } else if(pl_dec_to > blong.pl) { blong.inc_pl(pl_dec_to); }
	if ((blong.value > 0) && (along.value > diph_long_meks - blong.value)) {
//		cout << "a + b : operator+ failed : overphlo. add trying to overphlo diph_long_meks: " << hex << diph_long_meks << endl;
		throw "thro:operator+:overphlo";
	}
	else if ((blong.value < 0) && (along.value < diph_long_min - blong.value)) {
//		cout << "a + b : operator+ failed : underphlo. add trying to underphlo diph_long_min: -" << hex << -diph_long_min << endl;
		throw "thro:operator+:underphlo";
	}
	else { along.value = along.value + blong.value; }
	return along;
}
cplong& cplong::operator+=(const cplong& b) { *this = *this + b ; return *this; }
cplong operator+(long a, const cplong& b) { cplong along(a,0) ; return along+b; }
cplong cplong::operator++ (){
	cplong along(value,pl); cplong blong(1,0);
	try {
		along = along + blong;
	}  catch(char const* thro_msg) {
		cerr << "operator++ failed : thro_msg is: " << thro_msg << endl;
		throw "thro:operator++";
	}
	along.trim_ziroz();
	this->value = along.value;
	this->pl = along.pl;
	return along;
}
cplong cplong::operator++( int ){
	cplong temp_pl(value,pl); cplong along(value,pl); cplong blong(1,0);
	try {
		along = along + blong;
	}  catch(char const* thro_msg) {
		cerr << "operator++ failed : thro_msg is: " << thro_msg << endl;
		throw "thro:operator++int";
	}
	along.trim_ziroz();
	this->value = along.value;
	this->pl = along.pl;
	return temp_pl;
}


cplong cplong::operator-(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;
	along.trim_ziroz(); blong.trim_ziroz();
	int pl_dec_to = along.pl;
	if(blong.pl > along.pl) { pl_dec_to = blong.dec_pl(along.pl); }
	else if(along.pl > blong.pl) { pl_dec_to = along.dec_pl(blong.pl); }
	if(pl_dec_to > along.pl) { throw "operator+:blong:pl:dec_pl"; }
	else if(pl_dec_to > blong.pl) { throw "operator+:along:pl:dec_pl"; }
	if ((blong.value < 0) && (along.value > diph_long_meks + blong.value)) { throw "thro:operator-:overphlo"; }
	else if ((blong.value > 0) && (along.value < diph_long_min + blong.value)) { throw "thro:operator-:underphlo"; }
	else { along.value = along.value - blong.value; }
	return along;
}
cplong& cplong::operator-=(const cplong& b) { *this = *this - b ; return *this; }
cplong operator-(long a, const cplong& b) { cplong along(a,0) ; return along-b; }
cplong cplong::operator-- (){
	cplong along(value,pl); cplong blong(1,0);
	try { along = along - blong; }  catch(char const* thro_msg) {
		cout << "operator-- failed : thro_msg is: " << thro_msg << endl;
		throw "thro:operator--int";
	}
	along.trim_ziroz();
	this->value = along.value;
	this->pl = along.pl;
	return along;
}
cplong cplong::operator--( int ){
	cplong temp_pl(value,pl); cplong along(value,pl); cplong blong(1,0);
	try { along = along - blong; }  catch(char const* thro_msg) {
		cout << "operator--(int) failed : thro_msg is: " << thro_msg << endl;
		throw "thro:operator--int";
	}
	along.trim_ziroz();
	this->value = along.value;
	this->pl = along.pl;
	return temp_pl;
}


cplong cplong::operator*(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ;
	blong.trim_ziroz(); along.trim_ziroz();
	along.value = along.value * blong.value;
	along.pl = along.pl + blong.pl;
	along.trim_ziroz();
	return along;
}
cplong& cplong::operator*=(const cplong& b) { *this = *this * b ; return *this; }
cplong operator*(long a, const cplong& b) { cplong along(a,0) ; return along*b; }


cplong cplong::operator%(const cplong& b) {
	cplong blong = b ; cplong along(value,pl) ;
	if(0 == blong.value){ throw "divizn_by_zero_plong"; }
	if(0 == along.value) { return cplong(0,0); }
	if(blong.pl > along.pl) { blong.dec_pl(along.pl); } else if(along.pl > blong.pl) { along.dec_pl(blong.pl); }
	along.value = along.value % blong.value;
	return along;
}
cplong& cplong::operator%=(const cplong& b) { *this = *this % b ; return *this; }
cplong operator%(long a, const cplong& b) { cplong along(a,0) ; return along%b; }


cplong cplong::div_pl(const cplong& b, int dropplby){ // cplong::pl_dec_phur_divizn
	cplong along(value,pl) ; cplong blong = b ; cplong resultplong;
	int pl_decd_actual; int alongsavedpl;
	if(along.pl>0) { along.dec_pl(0); } if(blong.pl>0) { blong.dec_pl(0); }
	alongsavedpl = along.pl ; along.dec_pl(along.pl-dropplby); pl_decd_actual = alongsavedpl - along.pl ;
	if(0<pl_decd_actual){
		long kuotient = along.value / blong.value ; long remainder = along.value % blong.value ;
		int pending_dropplby = dropplby-pl_decd_actual;
		int kuotientpl = -(cplong::pl_dec_phur_divizn - pending_dropplby);
		cplong kuotientp(kuotient, kuotientpl);
		if((remainder>0) && (pending_dropplby>0)){
			cplong remainderp(remainder, 0);
			resultplong = kuotientp + remainderp.div_pl(b, pending_dropplby);
		} else { resultplong = kuotientp; }
	}
	else {}
	return resultplong;
}
cplong cplong::operator/(const cplong& b) {
	cplong along(value,pl) ; cplong blong = b ; int gap_pl = 0;
	if(0 == blong.value){ throw "divizn_by_zero_plong"; }
	if(0 == along.value) { return cplong(0,0); }
	blong.trim_ziroz();
	int pl_dec_to = blong.pl ;
	if(blong.pl > along.pl) {
		gap_pl = blong.pl - along.pl;
		blong.pl = along.pl ;
	}
	else if(along.pl > blong.pl) {
		pl_dec_to = along.dec_pl(blong.pl);
		if(pl_dec_to > blong.pl) {
			cout << "in cplong::operator/: pl_dec_to is " << pl_dec_to << endl;
			cout << "a / b : operator/ failed :pl of along: " << along << " cannot be reduced to pl oph blong: " << blong << endl;
			throw "operator/:along:pl:dec_pl";
		}
	}
	cplong results1 = along.div_pl(blong, cplong::pl_dec_phur_divizn);
	results1.pl -= gap_pl;
	return results1;
}
cplong& cplong::operator/=(const cplong& b) { *this = *this / b ; return *this; }
cplong operator/(long a, const cplong& b) { cplong along(a,0) ; return along/b; }

cplong cplong::operator- (){ return cplong(-value,pl); }


cplong::~cplong() { }
int cplong::bitsize(long value)
{
	int count = 0;
	if (value < 0) { value = -value; }
	while (value > 0) { count++; value = value >> 1; }
	return count;
}


void cplong::handle_overphlo(){
  	bool isneg = false; long positive_val = value;
  	if (value < 0) {positive_val = -value; isneg = true;}
  	positive_val >>= 4;
    if(isneg) {value = -positive_val;} else {value = positive_val;}
	++pl;
	this->trim_ziroz();
}
void cplong::handle_underphlo(){
  	bool isneg = false; long positive_val = value;
  	if (value < 0) {positive_val = -value; isneg = true;}
  	positive_val >>= 4;
  	if(isneg) {value = -positive_val;} else {value = positive_val;} // handling negatve nmbr bit siphting
	++pl;
	this->trim_ziroz();
}
