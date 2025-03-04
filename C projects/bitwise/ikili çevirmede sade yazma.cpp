#include <stdio.h>
#include <string.h>

void cevir(unsigned int sayi) {
   
    unsigned int maske = 1 << (sizeof(unsigned int) * 8 - 1);
   	int flag=0;
 	int i;	
    for ( i = 0; i < sizeof(unsigned int) * 8; i++) {
   
        if (sayi & maske) {
            
         	flag=1;
		    printf("1");
        }

		else if(flag==1) { 	// örnek olarak 11 saayýsý için binari soldan saða doðru 28 sýfýr sonra 1011 yazýlýr
           printf("0");		// maske zaten en sol 1 saða doðru 31 sýfýr yazýlýr karþýlaþtýrma maskedeki 1 ile yapýlýr
        }					// flag baþta sýfýr taki sayýda 1 bir bulunana kadar ve o sýraya kadar sýfýrlar flag=0 olduðundan ekran yazýlmaz
        sayi <<= 1;			// flag = 1 olunca yani ilk kez ekrana 1 yazýldýktan sonra sýfýrlar ekrana yazdýrýlabilecek
    }

    if (!flag) {
		printf("0");    
		}

    printf("\n");
	
}

int main() {
    unsigned int x;

    printf("Sayi girin: ");
    scanf("%u", &x);
    printf("%u sayisinin ikilik tabandaki karsiligi: ", x);
    
	cevir(x);
    
	return 0;
}

