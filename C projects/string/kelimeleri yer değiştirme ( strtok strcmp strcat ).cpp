#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE_LENGTH 100

int main() {
    char sentence[MAX_SENTENCE_LENGTH];
    
    printf("Cumle giriniz: ");
    fgets(sentence, MAX_SENTENCE_LENGTH, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    char wanted[MAX_SENTENCE_LENGTH];
    printf("Aranacak kelimeye giriniz: ");
    fgets(wanted, MAX_SENTENCE_LENGTH, stdin);
    wanted[strcspn(wanted, "\n")] = '\0';

    char word[MAX_SENTENCE_LENGTH];
    printf("Yerine konacak kelimeye giriniz: ");
    fgets(word, MAX_SENTENCE_LENGTH, stdin);
    word[strcspn(word, "\n")] = '\0';




    char output[MAX_SENTENCE_LENGTH] = "";
    char *token;
    
	token = strtok(sentence, " ");
    
	while(token != NULL) {
        
		if(strcmp(token, wanted) == 0) {
            strcat(output, word);
        }
		
		 else {
            strcat(output, token);
        }
        
        strcat(output, " ");
        token = strtok(NULL, " ");
    
	}

    output[strlen(output) - 1] = '\0';

    printf("%s\n", output);


    return 0;
}

