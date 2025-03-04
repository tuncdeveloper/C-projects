#include <stdio.h>
#include <string.h>

void checkVowelRule(char word[]) {
   
    int len = strlen(word);
    
    int aou_count = 0, ei_count = 0;
    int aouei_count = 0 ;
   	
   	
   	
   	for (int i = 0; i < len; i++) {
        
		 
		if (word[i] == 'a' || word[i] == 'o' || word[i] == 'u' || word[i] == 'e' || word[i] == 'i'){
			
            aouei_count++;
        } 
		
    }
   
   
    for (int i = 0; i < len; i++) {
        
		
		if (word[i] == 'a' || word[i] == 'o' || word[i] == 'u') {
            aou_count++;
        } 
		
		else if (word[i] == 'e' || word[i] == 'i') {
            ei_count++;
        }
    }


    if (aou_count == aouei_count || ei_count == aouei_count) {
        printf("\n\n%suyuyor: Buyuk Unlu Kurali\n", word);
        
    }
	
	 else {
        printf("\n\n%suymuyor: Buyuk Unlu Kurali\n", word);
      
    }
}

int main() {
    
    char cumle[50];
    

	printf("Cumleyi girin: ");	
	fgets(cumle, 50, stdin);
     
    checkVowelRule(cumle);
   
    return 0;
}

