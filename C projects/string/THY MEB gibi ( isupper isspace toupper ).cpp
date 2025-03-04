#include <stdio.h>
#include <string.h>
#include <ctype.h>

void fonk(char *sentence) {
    int i, n;
    n = strlen(sentence);

    for (i = 0; i < n; i++) {

        if (i == 0 || isspace(sentence[i - 1])) {
            sentence[i] = toupper(sentence[i]);
        } 
		
		else {
            sentence[i] = tolower(sentence[i]);
        
		}
    
	
	}



}

int main() {
    char cumle[50];

    printf("Cumleyi girin: ");
    fgets(cumle, 50, stdin);

    fonk(cumle);
    printf("\n\n");

    int i, n;
    n = strlen(cumle);
    for (i = 0; i < n; i++) {
        if (isupper(cumle[i])) {
            printf("%c", cumle[i]);
        }
    }

    return 0;
}

