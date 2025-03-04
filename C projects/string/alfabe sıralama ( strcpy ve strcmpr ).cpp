#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20], temp[20];
    int i, j;

    // Kullanýcýdan kelime giriþi isteyin
    printf("Lutfen 5 kelime girin:\n");
    for (i = 0; i < 5; ++i)
        scanf("%s", words[i]);

    // Kelimeleri alfabetik olarak sýralayýn
    for (i = 0; i < 4; ++i) {
        for (j = i + 1; j < 5; ++j) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    // Sýralanmýþ kelimeleri ekrana yazdýrýn
    printf("Girdiginiz kelimeler alfabetik olarak siralandi:\n");
    for (i = 0; i < 5; ++i)
        printf("%s\n", words[i]);

    return 0;
}

