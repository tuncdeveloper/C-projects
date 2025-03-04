#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void fonk(char* tarih, char* day, char* month, char* year) {

    // g�n� ay�rmak i�in strtok fonksiyonu kullan�l�r
    strcpy(day, strtok(tarih, " "));
    strcpy(month, strtok(NULL, " "));
    strcpy(year, strtok(NULL, " "));

    // ay� kelimeye d�n��t�rmek i�in switch case kullan�l�r
    if (strcmp(month, "ocak") == 0)
        strcpy(month, "01");
    else if (strcmp(month, "subat") == 0)
        strcpy(month, "02");
    else if (strcmp(month, "mart") == 0)
        strcpy(month, "03");
    else if (strcmp(month, "nisan") == 0)
        strcpy(month, "04");
    else if (strcmp(month, "mayis") == 0)
        strcpy(month, "05");
    else if (strcmp(month, "haziran") == 0)
        strcpy(month, "06");
    else if (strcmp(month, "temmuz") == 0)
        strcpy(month, "07");
    else if (strcmp(month, "agustos") == 0)
        strcpy(month, "08");
    else if (strcmp(month, "eyl�l") == 0)
        strcpy(month, "09");
    else if (strcmp(month, "ekim") == 0)
        strcpy(month, "10");
    else if (strcmp(month, "kasim") == 0)
        strcpy(month, "11");
    else if (strcmp(month, "aralik") == 0)
        strcpy(month, "12");
    else {
        printf("Hatal� ay de�eri: %s\n", month);
        exit(1);
    }

    // ekrana tarihi yazd�r
    printf("%s %s %s", day, month, year);
}

int main() {

    char tarih[100];
    char day[3], month[3], year[5];

    printf("K�sa tarih dizgisine giriniz : ");
    fgets(tarih, 100, stdin);
    tarih[strcspn(tarih, "\n")] = '\0';

    fonk(tarih, day, month, year);

    return 0;
}

