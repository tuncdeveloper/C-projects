#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char denklem[50];
    int m, n, x, y;

    // Denklemi kullan�c�dan al
    printf("Denklemi giriniz (y = mx + n): ");
    fgets(denklem, 50, stdin);

    // m ve n de�erlerini ay�kla
    sscanf(denklem, "y = %dx + %d", &m, &n);

    // x de�erini al
    printf("x degerini giriniz: ");
    scanf("%d", &x);

    // y de�erini hesapla
    y = m * x + n;

    // Sonucu ekrana yazd�r
    printf("Denklem: %s\n", denklem);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

