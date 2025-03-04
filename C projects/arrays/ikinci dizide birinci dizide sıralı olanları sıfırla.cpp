#include <stdio.h>

int main() {
    int dizi1[100], dizi2[100];
    int n1, n2, i, j, k;

    // Ýlk dizinin boyutunu ve elemanlarýný al
    printf("Dizi 1'in boyutunu girin: ");
    scanf("%d", &n1);
    printf("Dizi 1'in elemanlarini girin: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &dizi1[i]);
    }

    // Ýkinci dizinin boyutunu ve elemanlarýný al
    printf("Dizi 2'nin boyutunu girin: ");
    scanf("%d", &n2);
    printf("Dizi 2'nin elemanlarini girin: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &dizi2[i]);
    }

    // Döngü ile birinci dizinin elemanlarýna bakýlýr
    for (i = 0; i < n1; i++) {
        if (dizi1[i] == dizi2[0]) {
            // Eðer eleman ikinci dizinin ilk elemanýna eþitse
            k = i;  // Pozisyonu kaydet
            for (j = 0; j < n2; j++) {
                // Ýkinci dizinin elemanlarýna bakýlýr
                if (dizi1[k+j] != dizi2[j]) {
                    // Eðer elemanlar eþit deðilse
                    break;  // Ýkinci diziyle eþleþme yok
                }
            }
            if (j == n2) {  // Eðer ikinci diziyle eþleþme varsa
                for (j = 0; j < n2; j++) {
                    dizi1[k+j] = 0;  // Elemanlarý sýfýrla
                }
            }
        }
    }

    // Diziyi yazdýr
    printf("Sonuc: ");
    for (i = 0; i < n1; i++) {
        printf("%d ", dizi1[i]);
    }
    printf("\n");

    return 0;
}

