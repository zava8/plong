#include <iostream>
#include "tknss.h"
#include "tkns.h"
#include "tadd.h"
#include "tcmp.h"

using namespace std;

int main()
{
   int tval;

//   cout << endl << "///////////////////// tkns test cases" << endl;
//   tval = tkns::difalt(); if(0 !=tval) { cout << "tkns::difalt failed" << endl; return tval ; }

   cout << endl << "///////////////////// tknss test cases" << endl;
   tval = tknss::tn(); if(0 !=tval) { cout << "tknss::tn failed" << endl; return tval ; }
   //tval = tknss::tndeci(); if(0 !=tval) { cout << "tknss::tndeci failed" << endl; return tval ; }
   //tval = tknss::ty(); if(0 !=tval) { cout << "tknss::ty failed" << endl; return tval ; }
   //tval = tknss::tydeci(); if(0 !=tval) { cout << "tknss::tydeci failed" << endl; return tval ; }
//
//   ////////


//   cout << endl << boolalpha << "///////////////////// comparison test cases" << endl;
//   tval = tcmp::near0(); if(0 !=tval) { cout << "tcmp::near0 failed" << endl; return tval ; }
//   tval = tcmp::poz10(); if(0 !=tval) { cout << "tcmp::poz10 failed" << endl; return tval ; }
//   tval = tcmp::neg10(); if(0 !=tval) { cout << "tcmp::neg10 failed" << endl; return tval ; }
//   tval = tcmp::negpoz1(); if(0 !=tval) { cout << "tcmp::negpoz1 failed" << endl; return tval ; }
//
//   tval = tcmp::poz12(); if(0 !=tval) { cout << "tcmp::poz12 failed" << endl; return tval ; }
//   tval = tcmp::neg12(); if(0 !=tval) { cout << "tcmp::neg12 failed" << endl; return tval ; }
//   tval = tcmp::poz1mekslong(); if(0 !=tval) { cout << "tcmp::poz1mekslong failed" << endl; return tval ; }
//   tval = tcmp::neg1minlong(); if(0 !=tval) { cout << "tcmp::neg1minlong failed" << endl; return tval ; }
//
//   tval = tcmp::neg1mekslong(); if(0 !=tval) { cout << "tcmp::neg1mekslong failed" << endl; return tval ; }
//   tval = tcmp::poz1minlong(); if(0 !=tval) { cout << "tcmp::poz1minlong failed" << endl; return tval ; }
//   tval = tcmp::near_mekslong(); if(0 !=tval) { cout << "tcmp::near_mekslong failed" << endl; return tval ; }
//   tval = tcmp::near_minlong(); if(0 !=tval) { cout << "tcmp::near_minlong failed" << endl; return tval ; }
//   tval = tcmp::meks_meks(); if(0 !=tval) { cout << "tcmp::meks_meks failed" << endl; return tval ; }
//   tval = tcmp::min_min(); if(0 !=tval) { cout << "tcmp::min_min failed" << endl; return tval ; }

//   cout << endl << "///////////////////// operator + test cases" << endl;
//   tval = tadd::tn0(); if(0 !=tval) { cout << "tadd::tn0 failed" << endl; return tval ; }
//   ////////////
//   tval = tadd::mekslong(); if(0 !=tval) { cout << "tadd::mekslong failed" << endl; return tval ; }
//   tval = tadd::minlong(); if(0 !=tval) { cout << "tadd::minlong failed" << endl; return tval ; }
//   ////////////
//   tval = tadd::mekslongthro(); if(0 !=tval) { cout << "tadd::mekslongthro failed" << endl; return tval ; }
//   tval = tadd::minlongthro(); if(0 !=tval) { cout << "tadd::minlongthro failed" << endl; return tval ; }


   return 0;
}
