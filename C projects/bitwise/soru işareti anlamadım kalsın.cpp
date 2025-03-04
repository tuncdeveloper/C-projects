#include <stdio.h>

// sayýnýn bitlerini tersine çevirir
unsigned int tersinecevir(unsigned int sayi) {
    
	unsigned int yeni_sayi = 0;
    int i;
    
	for (i = 0; i < sizeof(unsigned int) * 4; i++) {
    
	    if (sayi & (1 << i)) {
            yeni_sayi |= (1 << ((sizeof(unsigned int) * 4 - 1) - i));
        }
    
	}
    
	return yeni_sayi;
}

// sayýnýn ikilik tabandaki bit karþýlýðýný ekrana yazdýrýr
void bityazdir(unsigned int sayi) {
    
	int i;
    
    for (i = sizeof(unsigned int) * 4 - 1; i >= 0; i--) {
    
	    printf("%d", (sayi >> i) & 1);
        if (i % 8 == 0) {
            printf(" ");
    
	    }
    }
    printf("\n");
}

int main() {
	
    unsigned int sayi;
    printf("Sayiyi giriniz: ");
    scanf("%u", &sayi);
    
    printf("Girdiginiz sayi = %u ", sayi);
   
    bityazdir(sayi);
    
	printf("Ters cevrilmis hali = %u ", tersinecevir(sayi));
    
	bityazdir(tersinecevir(sayi));
    
	return 0;
	
}

