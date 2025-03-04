#include <stdio.h>
#include <string.h>

int main() {
    
    int a[100];
    int b[100];
    int *pa, *pb;
    int i, j=0;
   	
    printf("Bir dizi giriniz: \n");
	
    for(pa=a; pa<a+3; pa++) {
        scanf("%d", pa);
    }
	
    printf("\nÝkinci dizi giriniz: \n");
	
    for(pb=b; pb<b+3; pb++) {
        scanf("%d", pb);
    }
	
	for(pa=a+3,pb=b;pb<b+3;pa++,pb++){
    	
        *pa=*pb;
    
	}
		
    printf("\nÝki dizi birlestirildikten sonra: ");
    
    
	for(i=0; i<6; i++){
        pa=a+i;
		printf("%d ", *(pa)); // printf("%d ", *(pa)) olmuyuyor
    }

    return 0;
}

