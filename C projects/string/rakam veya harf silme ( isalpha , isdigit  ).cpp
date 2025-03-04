#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000], newSentence[1000];
    int choice, i, j;

    printf("Bir cumle girin: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Yapmak istediginiz islemi secin:\n");
    printf("1 - Rakamlari sil\n");
    printf("2 - Unsurleri sil\n");
    printf("3 - Unlu harfleri sil\n");
    scanf("%d", &choice);

    // Rakamlarý silme
    if (choice == 1) {
        j = 0;
        for (i = 0; i < strlen(sentence); i++) {
            if (!isdigit(sentence[i])) {
                newSentence[j] = sentence[i];
                j++;
            }
        }
        newSentence[j] = '\0';
        printf("Sonuc: %s\n", newSentence);
    }
    // Unsurleri silme
    else if (choice == 2) {
        j = 0;
        for (i = 0; i < strlen(sentence); i++) {
            if (!isalpha(sentence[i]) || strchr("aeiouAEIOU", sentence[i])) {
                newSentence[j] = sentence[i];
                j++;
            }
        }
        newSentence[j] = '\0';
        printf("Sonuc: %s\n", newSentence);
    }
    // Unlu harfleri silme
    else if (choice == 3) {
        j = 0;
        for (i = 0; i < strlen(sentence); i++) {
            if (!isalpha(sentence[i]) || !strchr("aeiouAEIOU", sentence[i])) {
                newSentence[j] = sentence[i];
                j++;
            }
        }
        newSentence[j] = '\0';
        printf("Sonuc: %s\n", newSentence);
    }
    // Geçersiz seçenek
    else {
        printf("Gecersiz secenek!\n");
    }

    return 0;
}

