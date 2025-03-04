#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char word1[10];
    char word2[10];
    int displacement = 0;
    int i, j;
    int count = 0;
    
    printf("Enter the first word: ");
    scanf("%s", word1);
    
    int n = strlen(word1);
    
    do {
        count = 0;
        printf("Enter the next word: ");
        scanf("%s", word2);
        
        // check if the words are the same length
        if (n != strlen(word2)) {
            printf("(%d letter difference, chain broken)\n", n);
            break;
        }
        
        // compare characters in each word
        for (i = 0; i < n; i++) {
            if (!isalpha(word2[i])) {
                printf("Invalid input, please enter only letters.\n");
                return 0;
            }
            if (word1[i] != word2[i]) {
                count++;
                if (count > 1) {
                    printf("(%d letter difference, chain broken)\n", count);
                    return 0;
                }
                displacement = i;
            }
        }
        
        // check if the chain has been broken
        if (count == 1) {
            printf("(%d letter difference, chain unbroken)\n", count);
            strcpy(word1, word2);
        } else {
            printf("(%d letter difference, chain broken)\n", count);
        }
    } while (count == 1);
    
    return 0;
}

