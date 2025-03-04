#include <stdio.h>
#include <string.h>

int checkVowelRule(char word[]) {
    int len = strlen(word);
    int aou_count = 0, ei_count = 0, aouei_count = 0;
    
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
        
		printf("%s : Buyuk unlu uyumuna uyuyor\n", word);
    
	}
	
	 else{
    
	    printf("%s : Buyuk unlu uyumu uymuyor\n", word);
    
	}
}

int main() {
    char cumle[50];
    printf("Cumleyi girin: ");    
    fgets(cumle, 50, stdin);
    
    printf("Buyuk unlu uyumu'na uyan kelimeler:\n");
    char *token = strtok(cumle, " ");
    while (token != NULL) {
        checkVowelRule(token);
        token = strtok(NULL, " ");
    }
    
    printf("\nBuyuk unlu uyumu'na uymayan kelimeler:\n\n");
    
	token = strtok(cumle, " ");
    while (token != NULL) {
    
	    if (strstr(token, "\n") != NULL) {
            token[strlen(token)-1] = '\0';
        }
    
	    if (checkVowelRule(token) != 0) {
            printf("%s\n", token);
        }
     
	    token = strtok(NULL, " ");
    }
   
    return 0;
}

