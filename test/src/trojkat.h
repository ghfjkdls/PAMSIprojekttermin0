/*
 * trojkat.h
 *
 *  Created on: Feb 29, 2020
 *      Author: root
 */
#include <iostream>

#ifndef TROJKAT_H_
#define TROJKAT_H_

class trojkat {
	int a=1,b=1,c=1; //boki
	char nazwa[20]="domyslna";
 public:
	trojkat();
	virtual ~trojkat();
	trojkat czytaj(FILE *plik,trojkat trojkat);
	void pisz(trojkat trojkat);
};

#endif /* TROJKAT_H_ */
