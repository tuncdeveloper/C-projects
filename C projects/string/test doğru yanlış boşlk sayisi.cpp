#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 1000 

int main() {
	
    char s1[MAX_LEN]; 
    char cevap[MAX_LEN]="AABCDEEABC"; 
    
    printf("Lutfen cevaplara giriniz : ");
    fgets(s1, MAX_LEN, stdin); 
    s1[strcspn(s1, "\n")] = '\0'; 
    
    
    int n = strlen(cevap);
    int i, j;
    
    int dogru=0;
    int yanlis=0;
    int bosluk=0;
    
    
    
	for(i=0;i<n;i++){
		
		
		if(toupper(s1[i])==cevap[i]){
			
			dogru++;
		}
		
		else{
			
			if(s1[i]==' '){
				
				bosluk++;
			}
				
			else{
				
				yanlis++;
			}	
			
		}
	}

	printf("\nDogru Sayisi : %d\n\n",dogru);
	printf("Yanlis Sayisi : %d\n\n",yanlis);
	printf("Bosluk Sayisi : %d",bosluk);
    return 0;
}

