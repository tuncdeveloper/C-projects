#include <stdio.h>

void sayiBul(int *dizi, int elemanSayisi) {
    int i;
    double toplam = 0.0;
    int kucukEsit = 0, buyukEsit = 0;

    // Dizinin elemanlar�n� topla
    for (i = 0; i < elemanSayisi; i++) {
        toplam += dizi[i];
    }

    // Ortalamay� hesapla
    double ortalama = toplam / elemanSayisi;

    // Ortalamadan k���k ve b�y�k e�it eleman say�lar�n� hesapla
    for (i = 0; i < elemanSayisi; i++) {
        if (dizi[i] < ortalama) {
            kucukEsit++;
        } else if (dizi[i] >= ortalama) {
            buyukEsit++;
        }
    }

    // Sonu�lar� ekrana yazd�r
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

