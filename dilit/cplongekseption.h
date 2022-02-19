/*
 * cplongekseption.h
 *
 *  Created on: 19-Jan-2022
 *      Author: viml
 */

#ifndef CPLONGEKSEPTION_H_
#define CPLONGEKSEPTION_H_

#include <bits/exception.h>

class c_plong_ekseption: public std::exception {
public:
	c_plong_ekseption();
	const char* vat();
	virtual ~c_plong_ekseption();
};

#endif /* CPLONGEKSEPTION_H_ */
