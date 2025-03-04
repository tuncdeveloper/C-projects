#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE_LENGTH 100

int main() {
    char sentence[MAX_SENTENCE_LENGTH];
    
    printf("Bir cümle giriniz: ");
    fgets(sentence, MAX_SENTENCE_LENGTH, stdin);
    
    char* token = strtok(sentence, " ");
    int i = 0;
    
	
	while (token != NULL) {
    	
        if (i > 0) {
            sentence[i++] = '_';
        }
        
		  for (int j = 0; j < strlen(token); j++) {
            sentence[i++] = token[j];
        }      
        
		token = strtok(NULL, " ");
    
	}
    
    sentence[i] = '\0'; // son karakteri null karakteri ile deðiþtir
    
    printf("%s ", sentence);
    
	return 0;
}

