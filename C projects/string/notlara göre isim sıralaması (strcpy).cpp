#include <stdio.h>
#include <string.h>

int main() {

    char isimler[5][50]; // ��renci adlar�n� depolamak i�in 2 boyutlu bir dizi
    int notlar[5]; // ��renci notlar�n� depolamak i�in tek boyutlu bir dizi
    
    // ��renci adlar� ve notlar�n� kullan�c�dan alma
    for(int i = 0; i < 5; i++) {
        printf("Ogrenci %d adini ve notunu girin: ", i+1);
        scanf("%s %d", isimler[i], &notlar[i]);
    }
    
    // notlara g�re ��rencileri s�ralama (bubble sort kullan�yoruz)
    for(int i = 0; i < 5; i++) {
        
		for(int j = i+1; j < 5; j++) {
        
		    if(notlar[i] < notlar[j]) {
        
		        // notlar[i] ile notlar[j]'yi de�i�tir
        
		        int temp_not = notlar[i];
                notlar[i] = notlar[j];
                notlar[j] = temp_not;
                
                // isimler[i] ile isimler[j]'yi de�i�tir
        
		        char temp_isim[50];
                strcpy(temp_isim, isimler[i]);
                strcpy(isimler[i], isimler[j]);
                strcpy(isimler[j], temp_isim);
            }
        }
    }
    
    // s�ralanm�� ��renci adlar� ve notlar�n� yazd�rma
    printf("\nOgrencilerin notlarina g�re siralamasi:\n");
    for(int i = 0; i < 5; i++) {
        printf("%s : %d\n", isimler[i], notlar[i]);
    }
    
    return 0;
}

