#include <stdio.h>
#include <string.h>

int cevir(int sayi) {
    
    int maske = 1 << 4;		// 4 s�f�r ekle sola 1 ekle yani 10000 olur bu da int de�eri 16 d�r . 
    int i, j;
 
    for (i = 0; i < 5; i++) {
    	
        if (sayi & maske) {		// burda 8 de�eri 2'lik de�eri 01011 
        						// maskenin '1'i say�n�n en soldaki de�eri ile kar��la�t�r�l�r 
		    printf("1");
        
        }
		
		 else {
            printf("0");
        }

        sayi <<= 1;				// say�n�n en soldaki de�eri masekenin 1'i ile kar��la�t�rd�ktan sonra say� 1 basamak sola kayd�r�l�r ( 10110 )  olur 
								// daha sonra yine maskenin 1 'i ile kar��la�t�r�l�r say�n�n en soldaki de�eriyle devam eder dongu 5 kere devam eder .
        
		if (i % 8 == 7) { 
            printf(" ");
        }

    }
 
    putchar('\n');
 
   

}

int main() {
    

    cevir(8);
  
  
    return 0;
}

