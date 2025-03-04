#include <stdio.h>
#include <string.h>

int cevir(int sayi) {
    
    int maske = 1 << 19;		
    int i, j;
 	int top=0;
 	
    for (i = 0; i < 20; i++) {
    	
        if (sayi & maske) {		
        						
		    printf("1");
        
        }
		 else {
            printf("0");
    		top++;
	    }
        sayi <<= 1;		
    }
 
    putchar('\n');
 
   	return top;

}
int sifir(int sayi) {
    
    int maske = 1 << 19;		
    int i, j;
 	int top=0;
 	
    for (i = 0; i < 20; i++) {
    	
        if (sayi & maske) {		
        
        	return top;
        }
		
		 else {
        
    		top++;
	    }

        sayi <<= 1;	

	}
}
int main() {

	int x;
    printf("sayi gir : ");scanf("%d",&x);
	
	
	int a=cevir(x);
	int b=sifir(x);

	printf("\ntoplam sifirlarin sayisi : %d\n",a);
	printf("\nsoldaki sifirlar (degeri olmayan sifirlar) sayisi: %d\n",b);
    printf("\ngerekli sifirlarin sayisi %d",a-b);	
  	
  
    return 0;
}

