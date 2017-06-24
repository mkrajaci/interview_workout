//  NOT FINISHED
//  main.c
//  drugi_project
//
//  Created by Mario Krajačić on 24/06/2017.
//  Copyright © 2017 Mario Krajačić. All rights reserved.
//
/*Ekvilibrij niza je svaki onaj indeks N koji dijeli niz u dvije polovice (od indeksa 0 do N - 1 odnosno
 od indeksa N + 1 do kraja niza) čije su sume članova identične. Npr., u nizu
 0   -3   5   -4   -2   3   1   0
 ekvilibriji se nalaze na indeksima 0, 3 i 7 (primjetite da ekvilibriji mogu biti i na prvom i na
 zadnjem indeksu ukoliko ostatak niza kao sumu daje 0).
 
 Napišite funkciju koja primi jedan niz cijelih brojeva i jedan indeks, te vrati 1 ukoliko je taj indeks
 ekvilibrij niza, a 0 inače.*/

#include <stdio.h>
int je_li_ekvilibrij(int *niz, int indeks);

int main()
{
    int niz[8]={0, -3, 5, -4, -2, 3, 1, 0};
    printf("%d \n", je_li_ekvilibrij(niz, 1));
    return 0;
}
int je_li_ekvilibrij(int *niz, int indeks)
{
    int suma_1=0, suma_2=0, brojac;
    for(brojac=niz[indeks]-1; brojac>=0; --brojac)
        suma_1+=niz[brojac];
    for(brojac=niz[indeks]+1; brojac<=7; ++brojac)
        suma_2+=niz[brojac];
    if(suma_1==suma_2)
        return 1;
    return 0;
}
