#include <stdio.h>
#include <string.h>

int cevir(int sayi) {
    
    int maske = 1 << 4;		// 4 sýfýr ekle sola 1 ekle yani 10000 olur bu da int deðeri 16 dýr . 
    int i, j;
 
    for (i = 0; i < 5; i++) {
    	
        if (sayi & maske) {		// burda 8 deðeri 2'lik deðeri 01011 
        						// maskenin '1'i sayýnýn en soldaki deðeri ile karþýlaþtýrýlýr 
		    printf("1");
        
        }
		
		 else {
            printf("0");
        }

        sayi <<= 1;				// sayýnýn en soldaki deðeri masekenin 1'i ile karþýlaþtýrdýktan sonra sayý 1 basamak sola kaydýrýlýr ( 10110 )  olur 
								// daha sonra yine maskenin 1 'i ile karþýlaþtýrýlýr sayýnýn en soldaki deðeriyle devam eder dongu 5 kere devam eder .
        
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

