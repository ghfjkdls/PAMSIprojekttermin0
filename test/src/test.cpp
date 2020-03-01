#include <iostream>
#include "trojkat.h"


int main() {
	int linie=0;
	FILE *plik;

	plik=fopen("trojkat.txt","r");
	for(char c=getc(plik);c != EOF;c=getc(plik))if(c=='\n')linie++;

	rewind(plik);
	trojkat *cos= new trojkat[linie];
	for(int i=0;i<linie;i++){
		cos[i]=cos[i].czytaj(plik,cos[i]);
		cos[i].pisz(cos[i]);
	}
	return 0;
}

