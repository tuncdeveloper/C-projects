#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX_SENTENCE_LENGTH 100

int main() {
    char sentence[MAX_SENTENCE_LENGTH ];
    
    printf("Cumle giriniz :  ");
	fgets(sentence, MAX_SENTENCE_LENGTH, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    int i=0,j=0;
    
    char wanted[100];
    char word[100];
    
	printf("\nAranacak kelimeye giriniz : ");
    fgets(wanted,100, stdin);
    wanted[strcspn(wanted, "\n")] = '\0';
	printf("\nYerine konacak kelimeye giriniz : ");
    fgets(word,100,stdin);
    word[strcspn(word, "\n")] = '\0';
    
    
    int n=strlen(sentence);
    int wanted_length = strlen(wanted);
    int word_length = strlen(word);
    
    
	for(int i = 0; i < n; i++) {
        
		if(strncmp(sentence + i, wanted, wanted_length) == 0) {
        
        	
       
			memmove(sentence + i + word_length, sentence + i + wanted_length, n - i - wanted_length + 1);
		
			strncpy(sentence+i,word,word_length);
        
			n=abs(wanted_length - word_length)+n;
        	
            
            
        }
    }
	
    printf("%s\n",sentence);

    return 0;
}

