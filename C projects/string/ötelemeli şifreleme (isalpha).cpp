#include <stdio.h>
#include <ctype.h> // isalpha() fonksiyonu i�in gerekli k�t�phane

int main() {

    char cumle[1000];
    
	int oteleme;

    printf("Metni giriniz: ");
    fgets(cumle, 1000, stdin); // fgets() fonksiyonu ile klavyeden girilen c�mleyi okuyoruz

    printf("Oteleme miktarini giriniz: ");
    scanf("%d", &oteleme);

    printf("--------------------------------\n");
    printf("Sifreli cumle: ");


    for(int i = 0; cumle[i] != '\0'; i++) {
        char ch = cumle[i];

        if(isalpha(ch)) { // sadece harf karakterleri �ifrelenecek
            ch = tolower(ch); // b�y�k-k���k harf fark�n� ortadan kald�r�yoruz

            // �ifrelemeyi ger�ekle�tiriyoruz
            ch = 'a' + (ch - 'a' + oteleme) % 26;
        }

        printf("%c", ch);
    }

    printf("\n");

    return 0;
}

