#include <stdio.h>
#include <string.h>

struct musteri {
    char ad[50];
    int borc;
    
};

struct musteri enBuyukBorc(struct musteri *a, int n) {
   
    int i;
   
    struct musteri enb = a[0];
    
    for (i = 1; i < n; i++) {
   
        if (a[i].borc > enb.borc) {
   
            enb = a[i];
   
        }
    }

    return enb;
}

int main() {
	
    struct musteri a1 = {"Ahmet Terk", 2541};
    struct musteri a2 = {"Oya Gerim", 1425};
    struct musteri a3 = {"Selim Demir", 4568};

    struct musteri dizi[3] = {a1, a2, a3};

    printf("Eski siralama:\n");
    printf("%s %d\n", a1.ad, a1.borc);
    printf("%s %d\n", a2.ad, a2.borc);
    printf("%s %d\n", a3.ad, a3.borc);

    struct musteri enBuyuk = enBuyukBorc(dizi, 3);
    
    printf("\nBorcu en buyuk musteri : %s\nborcu da : %d", enBuyuk.ad,enBuyuk.borc);

    return 0;
}

