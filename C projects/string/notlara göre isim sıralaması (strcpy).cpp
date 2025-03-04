#include <stdio.h>
#include <string.h>

int main() {

    char isimler[5][50]; // öðrenci adlarýný depolamak için 2 boyutlu bir dizi
    int notlar[5]; // öðrenci notlarýný depolamak için tek boyutlu bir dizi
    
    // öðrenci adlarý ve notlarýný kullanýcýdan alma
    for(int i = 0; i < 5; i++) {
        printf("Ogrenci %d adini ve notunu girin: ", i+1);
        scanf("%s %d", isimler[i], &notlar[i]);
    }
    
    // notlara göre öðrencileri sýralama (bubble sort kullanýyoruz)
    for(int i = 0; i < 5; i++) {
        
		for(int j = i+1; j < 5; j++) {
        
		    if(notlar[i] < notlar[j]) {
        
		        // notlar[i] ile notlar[j]'yi deðiþtir
        
		        int temp_not = notlar[i];
                notlar[i] = notlar[j];
                notlar[j] = temp_not;
                
                // isimler[i] ile isimler[j]'yi deðiþtir
        
		        char temp_isim[50];
                strcpy(temp_isim, isimler[i]);
                strcpy(isimler[i], isimler[j]);
                strcpy(isimler[j], temp_isim);
            }
        }
    }
    
    // sýralanmýþ öðrenci adlarý ve notlarýný yazdýrma
    printf("\nOgrencilerin notlarina göre siralamasi:\n");
    for(int i = 0; i < 5; i++) {
        printf("%s : %d\n", isimler[i], notlar[i]);
    }
    
    return 0;
}

