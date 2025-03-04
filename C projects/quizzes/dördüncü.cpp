#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char *word) {
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++) {
        if (tolower(word[i]) != tolower(word[length-i-1])) {
            return 0;
        }
    }
    return 1;
}

char* find_quoted(char *input) {
    char *start, *end;

    start = strchr(input, '\"');
    end = strrchr(input, '\"');

    if (start != NULL && end != NULL && end > start) {
        *end = '\0';
        return start+1;
    } else {
        return NULL;
    }
}

void find_palindromes(char *input) {
    char *word = strtok(input, " \t\n\r");
    int found = 0;
    
    printf("Alinti cumlesinde Palindrome kelime : ");
    while (word != NULL) {
        if (is_palindrome(word)) {
            printf("%s ", word);
            found = 1;
        }
        word = strtok(NULL, " \t\n\r");
    }
    if (!found) {
        printf("Palindrom kelime yok\n");
    }
}

int main() {
    char input[1000];
    char *quoted;

    printf("Lutfen bir cumle girin : ");
    fgets(input, sizeof(input), stdin);

    quoted = find_quoted(input);

    if (quoted != NULL) {
        printf("Alinti cumlesi : %s\n", quoted);
        find_palindromes(quoted); 
    } else {
        printf("Alinti cumlesi yok\n");
    }

    return 0;
}
