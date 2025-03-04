#include <stdio.h>

int main() {
    int arr[10], freq[10], i, j, count;

    // Diziyi kullan�c�dan al
    printf("L�tfen 10 elemanl� bir dizi girin:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    // Dizideki elemanlar�n tekrar say�lar�n� bul
    for (i = 0; i < 10; i++) {
        count = 1;
        for (j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        
        
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Her eleman�n tekrar say�s�n� yazd�r
    printf("Her bir eleman�n tekrar say�s�:\n");
    for (i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%d tekrar edildi %d kere.\n", arr[i], freq[i]);
        }
    }

    return 0;
}

