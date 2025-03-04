#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int fonk(char* kelime, char harf, int baslangic) {

    int i;

    int n = strlen(kelime);

    for (i = baslangic; i >= 0; i--) {

        if (kelime[i] == harf) {
            return i;
        }
    }
    return -1;
}

int main() {
 
    char kelime[100];
    char harf;

    printf("Lutfen bir cumle giriniz : ");
    fgets(kelime, 100, stdin);

    printf("aranacak harfi giriniz : ");
    scanf(" %c", &harf);

    int a = fonk(kelime, harf, strlen(kelime) - 1);
   
    while (a != -1) {
   
        printf("Dizide %c harfi sondan %d indistedir\n\n", harf, a+1);
   
        a = fonk(kelime, harf, a - 1);
   
    }

    return 0;
}

