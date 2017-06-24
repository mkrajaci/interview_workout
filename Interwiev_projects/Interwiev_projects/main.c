//
//  main.c
//  Interwiev_projects
//
//  Created by Mario Krajačić on 24/06/2017.
//  Copyright © 2017 Mario Krajačić. All rights reserved.
//
/*Upitajte korisnika jedan prirodni broj N, te ispišite najveći broj manji od N koji ima najmanje 3
 djelitelja (ne računajući 1 i njega samog). Ukoliko takvog broja nema, ispišite na zaslon "Trazeni broj
 ne postoji". Npr. za N == 18, traženi broj je 16 koji je djeljiv sa 2, 4 i 8.
 */
#include <stdio.h>

int main(void)
{
    int broj_N, djeljitelja=0;
    printf("Unesite jedan broj: \n");
    scanf("%d", &broj_N);
    //umanjivanje unesenog broja
    --broj_N;
    while(broj_N>1) //broj mora biti manji od unesenog, a veci od 1
    {
        djeljitelja=0;  //reset brojaca djeljitelja
        for(int brojac=broj_N-1; brojac>1; --brojac)
        {
            if(broj_N%brojac==0)
                ++djeljitelja;
        }
        if(djeljitelja>=3)
        {
            printf("Trazeni broj je: %d \n", broj_N);
            break;
        }
        --broj_N;
    }
    if(djeljitelja<3)
        printf("Trazeni broj ne postoji \n");
    return 0;
}
