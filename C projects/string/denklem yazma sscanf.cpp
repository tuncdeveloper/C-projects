#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char denklem[50];
    int m, n, x, y;

    // Denklemi kullanýcýdan al
    printf("Denklemi giriniz (y = mx + n): ");
    fgets(denklem, 50, stdin);

    // m ve n deðerlerini ayýkla
    sscanf(denklem, "y = %dx + %d", &m, &n);

    // x deðerini al
    printf("x degerini giriniz: ");
    scanf("%d", &x);

    // y deðerini hesapla
    y = m * x + n;

    // Sonucu ekrana yazdýr
    printf("Denklem: %s\n", denklem);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

