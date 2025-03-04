#include <stdio.h>
#include <stdlib.h>

struct zaman {
    int saat, dakika, saniye;
};

void fonk(struct zaman s1, struct zaman s2){
   
    int sa = s1.saat+s2.saat;
    int da = s1.dakika+s2.dakika;
    int se= s1.saniye+s2.saniye;

	if(se>=60){
  		
  		se=se%60;
  		da=da+1;
  		
	}
  	
  	if(da>=60){
  		
  		da=da%60;
  		sa=sa+1;
  		
	}
  	sa=sa%24;
  	

    printf("Yeni zaman: %02d:%02d:%02d\n", sa, da, se);   
}

int main() {
    struct zaman z1,z2;
    
  
    printf("1. Zamaný giriniz (saat.dakika.saniye): ");
    scanf("%d.%d.%d", &z1.saat, &z1.dakika, &z1.saniye);
   
    printf("2. Zamaný giriniz (saat.dakika.saniye): ");
    scanf("%d.%d.%d", &z2.saat, &z2.dakika, &z2.saniye);
    
    printf("\n1. Eski zaman: %02d:%02d:%02d\n\n", z1.saat, z1.dakika, z1.saniye);  
    printf("\n2. Eski zaman: %02d:%02d:%02d\n\n", z2.saat, z2.dakika, z2.saniye);  
    
    fonk(z1, z2);  
    return 0;
}

