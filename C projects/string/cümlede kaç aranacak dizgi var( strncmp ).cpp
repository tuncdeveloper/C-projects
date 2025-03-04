#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char text[MAX_LENGTH];
    char word[MAX_LENGTH];
    int count = 0;

    printf("Metni giriniz: ");
    fgets(text, MAX_LENGTH, stdin);
    
    printf("Aranacak kelimeyi giriniz: ");
    scanf("%s", word);

    int word_len = strlen(word);
    
    for (int i = 0; i < strlen(text) - word_len + 1; i++) {

        if (strncmp(text+i, word,word_len) == 0) {

            count++;

        }
    }

    printf("'%s' kelimesi metinde %d kez geciyor.\n", word, count);

    return 0;
}

