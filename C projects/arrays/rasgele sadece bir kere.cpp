#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dizi[100];
    srand(time(NULL));

    int i, j;
    int a = 0;

    for (i = 0; i < 9; i++) {
        do {
            dizi[i] = rand() % 9 + 1;
            
            for (j = 0; j < i; j++) {
                if (dizi[i] == dizi[j]) {
                    break;
                }
            }
        } while (j < i);
    }

    for (i = 0; i < 9; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}

