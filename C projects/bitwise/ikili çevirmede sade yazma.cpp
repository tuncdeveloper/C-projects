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

		else if(flag==1) { 	// �rnek olarak 11 saay�s� i�in binari soldan sa�a do�ru 28 s�f�r sonra 1011 yaz�l�r
           printf("0");		// maske zaten en sol 1 sa�a do�ru 31 s�f�r yaz�l�r kar��la�t�rma maskedeki 1 ile yap�l�r
        }					// flag ba�ta s�f�r taki say�da 1 bir bulunana kadar ve o s�raya kadar s�f�rlar flag=0 oldu�undan ekran yaz�lmaz
        sayi <<= 1;			// flag = 1 olunca yani ilk kez ekrana 1 yaz�ld�ktan sonra s�f�rlar ekrana yazd�r�labilecek
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

