/*
 * trojkat.cpp
 *
 *  Created on: Feb 29, 2020
 *      Author: root
 */

#include "trojkat.h"
#include <iostream>

trojkat::trojkat() {
	// TODO Auto-generated constructor stub

}

trojkat::~trojkat() {
	// TODO Auto-generated destructor stub
}

trojkat trojkat::czytaj(FILE *plik,trojkat trojkat){
	fscanf(plik,"%s", trojkat.nazwa);
	fscanf(plik,"%i", &trojkat.a);
	fscanf(plik,"%i", &trojkat.b);
	fscanf(plik,"%i", &trojkat.c);
	return trojkat;
}


void trojkat::pisz(trojkat trojkat){
	std::cout<<trojkat.nazwa<<"   obwod="<<trojkat.a+trojkat.b+trojkat.c<<std::endl;
}
