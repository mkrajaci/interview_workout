//
//  main.c
//  treci_project
//
//  Created by Mario Krajačić on 27/06/2017.
//  Copyright © 2017 Mario Krajačić. All rights

/*Napišite funkciju koja primi jedan niz cijelih brojeva, te vrati 1 ukoliko unutar njega postoji barem 1 podniz čija je suma jednaka 0,
 a 0 inače.
 Npr. u nizu:
	1  2  3 -1  2 -6 -2  4
 takav niz postoji (podcrtani članovi).*/

#include <stdio.h>
int funkcija_podniz(int *na_niz, int duljina);
int main(void){
    int niz[]={1,2,3,-1,2,-6,-2,4};
    int duljina_niza=sizeof(niz)/sizeof(niz[0]);
    printf("%d\n", funkcija_podniz(niz, duljina_niza));
    return 0;
}
int funkcija_podniz(int *na_niz, int duljina){
    //pomak kroz niz jedan po jedan clan da postane pocetni
    for(int brojac=0;brojac<duljina;++brojac){
        int suma=0;
        //sumiranje od zadanog clana jedan po jedan, ako je nula odmah return 1
        for(int brojac_nutarnji=brojac;brojac_nutarnji<=duljina;++brojac_nutarnji){
            suma+=na_niz[brojac_nutarnji];
            if(suma==0)
                return 1;
        }
    }
    return 0;
}
