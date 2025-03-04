#include <stdio.h>

void sayiBul(int *dizi, int elemanSayisi) {
    int i;
    double toplam = 0.0;
    int kucukEsit = 0, buyukEsit = 0;

    // Dizinin elemanlarýný topla
    for (i = 0; i < elemanSayisi; i++) {
        toplam += dizi[i];
    }

    // Ortalamayý hesapla
    double ortalama = toplam / elemanSayisi;

    // Ortalamadan küçük ve büyük eþit eleman sayýlarýný hesapla
    for (i = 0; i < elemanSayisi; i++) {
        if (dizi[i] < ortalama) {
            kucukEsit++;
        } else if (dizi[i] >= ortalama) {
            buyukEsit++;
        }
    }

    // Sonuçlarý ekrana yazdýr
    printf("Dizinin ortalamasi: %.2f\n", ortalama);
    printf("Ortalama ile esit veya daha kucuk olan eleman sayisi: %d\n", kucukEsit);
    printf("Ortalama ile esit veya daha buyuk olan eleman sayisi: %d\n", buyukEsit);
}

int main() {
    int dizi[] = {2, 4, 6, 8, 10};
    int elemanSayisi = sizeof(dizi) / sizeof(int);
    sayiBul(""dizi, elemanSayisi);
    return 0;
}

