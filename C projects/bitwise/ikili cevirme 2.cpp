#include <stdio.h>
#include <string.h>

int cevir(int sayi) {
    int top = 0;
    int maske = 1 << 19; // 20 bitli unsigned integer'larý ele alýrken maske 1<<19 olarak deðiþtirilmeli
    int i, j;
 
    for (i = 0; i < 20; i++) {
        if (sayi & maske) {
        
		    printf("1");
            top++;
        }
		
		 else {
            printf("0");
        }

        sayi <<= 1;

        if (i % 8 == 7) { // 8 bitte bir boþluk eklenebilmesi için 7 yerine 8-1 = 7 kullanýlmalý
            printf(" ");
        }

    }
 
    putchar('\n');
 
    printf("\ntoplam birlerin sayisi : %d", top);

    
	if (top % 2 == 0) {
        return 0;
    } 
	
	else {
        return 1;
    }

}

int main() {
    int x, k;
   
    printf("sayi gir : ") ;scanf("%d", &x);
   
    k = cevir(x);
  
    printf("\n\nbirlerin toplami tekse(1) , ciftse (0) dondurecektir = %d", k); // geri döndürülen deðer program tarafýndan kullanýlmalý
  
    return 0;
}

