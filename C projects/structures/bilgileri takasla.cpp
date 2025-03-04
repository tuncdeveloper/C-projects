#include <stdio.h>
#include <string.h>

struct Ogrenci {
    int numara;
    char ad[30];
    char soyad[30];
    float not;
    char harf_notu;
};

void takas(struct Ogrenci *a, struct Ogrenci *b) {
    struct Ogrenci temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    struct Ogrenci a1 = {2, "Ahmet", "Gedik", 2.3, 'C'};
    struct Ogrenci a2 = {5, "Oya", "Türkali", 4.3, 'A'};

    printf("a1 degerleri:\nnumara: %d\nad: %s\nsoyad: %s\nnot: %f\nharf_notu: %c\n\n",
           a1.numara, a1.ad, a1.soyad, a1.not, a1.harf_notu);
    printf("a2 degerleri:\nnumara: %d\nad: %s\nsoyad: %s\nnot: %f\nharf_notu: %c\n\n",
           a2.numara, a2.ad, a2.soyad, a2.not, a2.harf_notu);

    takas(&a1, &a2);

    printf("Takas sonrasi:\n\n");
    printf("a1 degerleri:\nnumara: %d\nad: %s\nsoyad: %s\nnot: %f\nharf_notu: %c\n\n",
           a1.numara, a1.ad, a1.soyad, a1.not, a1.harf_notu);
    printf("a2 degerleri:\nnumara: %d\nad: %s\nsoyad: %s\nnot: %f\nharf_notu: %c\n\n",
           a2.numara, a2.ad, a2.soyad, a2.not, a2.harf_notu);

    return 0;
}

