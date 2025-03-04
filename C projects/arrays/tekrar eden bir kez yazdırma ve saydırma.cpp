#include <stdio.h>
#include <string.h>
#include <ctype.h>

int fonk(char* dizi) {

    int i,j;
	
    int n = strlen(dizi);
	int flag = 0;
	int sayac=0;
	
	printf("tekrar eden harfler : ");
    
	for(i = 0; i < n; i++) {
    	
		flag = 0;
    	for(j = 0; j < i; j++){
        
			if(dizi[i] == dizi[j]) {
         
			    flag = 1;	    
        	    break;
        	}
		}
    
		if(flag == 0){
    	
       		for(j = i + 1; j < n; j++){
			   
            
				if(dizi[i] == dizi[j]) {
                
					sayac++;
            	    printf(" %c",dizi[i]);
                
					break;
	           	}
			}
		}
	}

	return sayac;

}

int main() {
 
    char kelime[100];
    

    printf("Lutfen bir cumle giriniz : ");
    fgets(kelime, 100, stdin);

      
	printf("\n\ntekrar eden harflerin sayisi : %d",fonk(kelime));
	
	
    return 0;

}

