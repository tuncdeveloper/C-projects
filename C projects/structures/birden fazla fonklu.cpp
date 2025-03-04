#include <stdio.h>
#include <string.h>

struct oyuncu {
    char isim[10];
    int can;
    float kuvvet;
};

void kuvvetiarttir(struct oyuncu *a, float x) {
    (*a).kuvvet += x;
}

struct oyuncu hangisidahakuvvetli(struct oyuncu a, struct oyuncu b) {
    struct oyuncu c;

    if (a.kuvvet > b.kuvvet) {
        c.can = a.can;
        c.kuvvet = a.kuvvet;
        strcpy(c.isim, a.isim);
        return c;
    } else if (a.kuvvet < b.kuvvet) {
        c.can = b.can;
        c.kuvvet = b.kuvvet;
        strcpy(c.isim, b.isim);
        return c;
    } else {
        if (a.can > b.can) {
            c.can = a.can;
            c.kuvvet = a.kuvvet;
            strcpy(c.isim, a.isim);
            return c;
        } else if (a.can < b.can) {
            c.can = b.can;
            c.kuvvet = b.kuvvet;
            strcpy(c.isim, b.isim);
            return c;
        } else {
            strcpy(c.isim, b.isim);
        }
    }
}

void yazdir(struct oyuncu a, struct oyuncu b) {
    printf("ilk uye: %s\nikinci uye: %s", a.isim, b.isim);
}

int main() {
    struct oyuncu a = {"otto", 3, 0.7}, b = {"botto", 4, 4.6}, c;
    kuvvetiarttir(&a, 4.2);
    c = hangisidahakuvvetli(a, b);
    printf("\nKuvvetli olan ve ozellikleri: %s %d , %.2f\n", c.isim, c.can, c.kuvvet);
    yazdir(a, b);
    return 0;
}

