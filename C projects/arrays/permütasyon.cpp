#include <stdio.h>

// Fonksiyonlarýn tanýmlanmasý
void swap(int* a, int* b);
void permute(int* nums, int start, int end);

// Ana fonksiyon
int main() {
    int nums[100];
    int n;
    
    // Dizi boyutunu alma ve elemanlarý okuma
    printf("Dizi boyutunu giriniz: ");
    scanf("%d", &n);
    printf("Dizinin elemanlarini giriniz:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Tüm permütasyonlarý hesaplama
    printf("Tum permütasyonlar:\n");
    permute(nums, 0, n-1);
    
    return 0;
}

// Ýki sayýnýn yerlerini deðiþtirme fonksiyonu
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Dizinin tüm permütasyonlarýný bulma fonksiyonu (recursive)
void permute(int* nums, int start, int end) {
    if (start == end) { // Dizinin sonuna gelindiðinde, permütasyonu yazdýr
        printf("[");
        for (int i = 0; i <= end; i++) {
            printf("%d", nums[i]);
            if (i != end) {
                printf(", ");
            }
        }
        printf("]\n");
    } else { // Dizinin henüz sonuna gelinmediyse, tüm elemanlarý deneyerek recursive çaðýr
        for (int i = start; i <= end; i++) {
            swap(&nums[start], &nums[i]);
            permute(nums, start+1, end);
            swap(&nums[start], &nums[i]);
        }
    }
}

