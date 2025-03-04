#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char *word) {
   
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        if (tolower(word[i]) != tolower(word[len - i - 1])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char sentence[100];
    printf("Bir cumle giriniz: ");
    fgets(sentence, 100, stdin);
    
    char *word = strtok(sentence, " ,.!?\n\t");
    while (word != NULL) {
        if (is_palindrome(word)) {
            printf("%s\n", word);
        }
        word = strtok(NULL, " ,.!?\n\t");
    }
    
    return 0;
}

