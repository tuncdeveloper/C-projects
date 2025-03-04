#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20], temp[20];
    int i, j;

    // Kullan�c�dan kelime giri�i isteyin
    printf("Lutfen 5 kelime girin:\n");
    for (i = 0; i < 5; ++i)
        scanf("%s", words[i]);

    // Kelimeleri alfabetik olarak s�ralay�n
    for (i = 0; i < 4; ++i) {
        for (j = i + 1; j < 5; ++j) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    // S�ralanm�� kelimeleri ekrana yazd�r�n
    printf("Girdiginiz kelimeler alfabetik olarak siralandi:\n");
    for (i = 0; i < 5; ++i)
        printf("%s\n", words[i]);

    return 0;
}

