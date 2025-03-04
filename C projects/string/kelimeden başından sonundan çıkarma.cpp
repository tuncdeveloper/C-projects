#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000 // Girdi dizgisi için maksimum karakter sayýsý

int main() {
    char str[MAX_LEN]; // Girdi dizgisi
    int start_chars, end_chars; // Baþlangýç ve bitiþ karakter sayýlarý

    printf("Lutfen bir dizgi girin: ");
    fgets(str, MAX_LEN, stdin); // Dizgiyi girdi olarak oku
    str[strcspn(str, "\n")] = '\0'; // fgets() sonrasý oluþan newline karakterini kaldýr

    printf("Baslangicta kac karakter cikarilsin? ");
    scanf("%d", &start_chars);

    printf("Sonda kac karakter cikarilsin? ");
    scanf("%d", &end_chars);

    int len = strlen(str); // Dizginin uzunluðunu hesapla
    int new_len = len - start_chars - end_chars; // Yeni dizginin uzunluðunu hesapla

    // Yeni dizgiyi oluþtur
    char new_str[MAX_LEN];
    for (int i = 0; i < new_len; i++) {
        new_str[i] = str[start_chars + i];
    }
    new_str[new_len] = '\0'; // Yeni dizgi sonlandýrýcýsý

    printf("Girilen dizgi: %s\n", str);
    printf("Yeni dizgi: %s\n", new_str);

    return 0;
}

