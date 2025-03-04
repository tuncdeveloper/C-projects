#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000 // Girdi dizgisi i�in maksimum karakter say�s�

int main() {
    char str[MAX_LEN]; // Girdi dizgisi
    int start_chars, end_chars; // Ba�lang�� ve biti� karakter say�lar�

    printf("Lutfen bir dizgi girin: ");
    fgets(str, MAX_LEN, stdin); // Dizgiyi girdi olarak oku
    str[strcspn(str, "\n")] = '\0'; // fgets() sonras� olu�an newline karakterini kald�r

    printf("Baslangicta kac karakter cikarilsin? ");
    scanf("%d", &start_chars);

    printf("Sonda kac karakter cikarilsin? ");
    scanf("%d", &end_chars);

    int len = strlen(str); // Dizginin uzunlu�unu hesapla
    int new_len = len - start_chars - end_chars; // Yeni dizginin uzunlu�unu hesapla

    // Yeni dizgiyi olu�tur
    char new_str[MAX_LEN];
    for (int i = 0; i < new_len; i++) {
        new_str[i] = str[start_chars + i];
    }
    new_str[new_len] = '\0'; // Yeni dizgi sonland�r�c�s�

    printf("Girilen dizgi: %s\n", str);
    printf("Yeni dizgi: %s\n", new_str);

    return 0;
}

