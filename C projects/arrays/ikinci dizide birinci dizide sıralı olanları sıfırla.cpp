#include <stdio.h>

int main() {
    int dizi1[100], dizi2[100];
    int n1, n2, i, j, k;

    // �lk dizinin boyutunu ve elemanlar�n� al
    printf("Dizi 1'in boyutunu girin: ");
    scanf("%d", &n1);
    printf("Dizi 1'in elemanlarini girin: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &dizi1[i]);
    }

    // �kinci dizinin boyutunu ve elemanlar�n� al
    printf("Dizi 2'nin boyutunu girin: ");
    scanf("%d", &n2);
    printf("Dizi 2'nin elemanlarini girin: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &dizi2[i]);
    }

    // D�ng� ile birinci dizinin elemanlar�na bak�l�r
    for (i = 0; i < n1; i++) {
        if (dizi1[i] == dizi2[0]) {
            // E�er eleman ikinci dizinin ilk eleman�na e�itse
            k = i;  // Pozisyonu kaydet
            for (j = 0; j < n2; j++) {
                // �kinci dizinin elemanlar�na bak�l�r
                if (dizi1[k+j] != dizi2[j]) {
                    // E�er elemanlar e�it de�ilse
                    break;  // �kinci diziyle e�le�me yok
                }
            }
            if (j == n2) {  // E�er ikinci diziyle e�le�me varsa
                for (j = 0; j < n2; j++) {
                    dizi1[k+j] = 0;  // Elemanlar� s�f�rla
                }
            }
        }
    }

    // Diziyi yazd�r
    printf("Sonuc: ");
    for (i = 0; i < n1; i++) {
        printf("%d ", dizi1[i]);
    }
    printf("\n");

    return 0;
}

