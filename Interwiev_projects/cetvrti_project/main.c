//
//  main.c
//  cetvrti_project
//
//  Created by Mario Krajačić on 30/06/2017.
//  Copyright © 2017 Mario Krajačić. All rights reserved.
//
/*Zadan je niz brojeva, unutar njega pronadji dva najmanja i vrati njihovu sumu*/

#include <stdio.h>

int main() {
    //deklaracija niza za testiranje
    int niz[]={1,2,1,3,4,5,1};
    //postavljanje vrijednosti oba minimuma na prve dvije iz niza
    int min1=niz[0], min2=niz[1], index1=0, index2=1;
    //Odredjivanje duljine niza
    int duljina_niza=sizeof niz/sizeof(niz[0]);
    //pronalazak prvog najmanjeg broja i mjesta unutar niza na kojem se nalazi
    for(int brojac1=1; brojac1<duljina_niza;++brojac1){
        if(min1>=niz[brojac1]){
            min1=niz[brojac1];
            index1=brojac1;
        }
    }
    //pronalazak drugog najmanjeg broja ali na razlicitom mjestu unutar niza od prvog minimuma
    for (int brojac2=0; brojac2<duljina_niza; ++brojac2) {
        if (index1==index2) {
            continue;
        }
        if (min2>=niz[brojac2]) {
            min2=niz[brojac2];
            index2=brojac2;
        }
    }
    //vracanje rezultata
    return min1+min2;
}
