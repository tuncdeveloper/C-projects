#include "stdio.h"


void bozuklukAgirlik(float paraMiktari){



    int bolum = paraMiktari/1;
    float birlira = bolum * 8.2;
    int yeniparaMiktari = ((paraMiktari - bolum) * 100)+1;
    float ellikurus = (yeniparaMiktari / 50) * 6.8;
    float yirmibes = ((yeniparaMiktari%50)/25)*4;
    float onkurus = ((yeniparaMiktari%25)/10)*3.15;

    float toplamagirlik = (birlira + (ellikurus+yirmibes+onkurus))/1000;
    printf("Bozukluklarýn toplam kg ederi = %.5f",toplamagirlik);


}


int main(){
    float paraMiktari;
    printf(" Parayi giriniz (TL): ");
    scanf("%f",&paraMiktari);

    bozuklukAgirlik(paraMiktari);


    return 0;
}
