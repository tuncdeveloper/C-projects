#include <stdio.h>

// Fonksiyonlar�n tan�mlanmas�
void swap(int* a, int* b);
void permute(int* nums, int start, int end);

// Ana fonksiyon
int main() {
    int nums[100];
    int n;
    
    // Dizi boyutunu alma ve elemanlar� okuma
    printf("Dizi boyutunu giriniz: ");
    scanf("%d", &n);
    printf("Dizinin elemanlarini giriniz:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // T�m perm�tasyonlar� hesaplama
    printf("Tum perm�tasyonlar:\n");
    permute(nums, 0, n-1);
    
    return 0;
}

// �ki say�n�n yerlerini de�i�tirme fonksiyonu
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Dizinin t�m perm�tasyonlar�n� bulma fonksiyonu (recursive)
void permute(int* nums, int start, int end) {
    if (start == end) { // Dizinin sonuna gelindi�inde, perm�tasyonu yazd�r
        printf("[");
        for (int i = 0; i <= end; i++) {
            printf("%d", nums[i]);
            if (i != end) {
                printf(", ");
            }
        }
        printf("]\n");
    } else { // Dizinin hen�z sonuna gelinmediyse, t�m elemanlar� deneyerek recursive �a��r
        for (int i = start; i <= end; i++) {
            swap(&nums[start], &nums[i]);
            permute(nums, start+1, end);
            swap(&nums[start], &nums[i]);
        }
    }
}

