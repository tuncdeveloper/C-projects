#include <stdio.h>
#include <string.h>

typedef struct {
    char isim[10];
    int sermaye;
    float pazar_payi;
} sirket;

sirket birlestir(sirket a, sirket b) {

    sirket c;

    c.sermaye = a.sermaye + b.sermaye;
    c.pazar_payi = a.pazar_payi + b.pazar_payi;

    if (a.sermaye > b.sermaye)
        strcpy(c.isim, a.isim);

    else
        strcpy(c.isim, b.isim);

    return c;
}

int main() {
    sirket a, b, c;
   
    printf("Birinci sirketin isim, sermaye ve pazar payini giriniz: ");
    scanf("%s %d %f", a.isim, &a.sermaye, &a.pazar_payi);
   
    printf("›kinci sirketin isim, sermaye ve pazar payini giriniz: ");
    scanf("%s %d %f", b.isim, &b.sermaye, &b.pazar_payi);
   
   
    c = birlestir(a, b);
   
    printf("\n\n›smi, sermayesi ve pazar payi: %s %d %.2f", c.isim, c.sermaye, c.pazar_payi);
    return 0;
}

