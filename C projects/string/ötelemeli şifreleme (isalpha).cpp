#include <stdio.h>
#include <ctype.h> // isalpha() fonksiyonu için gerekli kütüphane

int main() {

    char cumle[1000];
    
	int oteleme;

    printf("Metni giriniz: ");
    fgets(cumle, 1000, stdin); // fgets() fonksiyonu ile klavyeden girilen cümleyi okuyoruz

    printf("Oteleme miktarini giriniz: ");
    scanf("%d", &oteleme);

    printf("--------------------------------\n");
    printf("Sifreli cumle: ");


    for(int i = 0; cumle[i] != '\0'; i++) {
        char ch = cumle[i];

        if(isalpha(ch)) { // sadece harf karakterleri þifrelenecek
            ch = tolower(ch); // büyük-küçük harf farkýný ortadan kaldýrýyoruz

            // Þifrelemeyi gerçekleþtiriyoruz
            ch = 'a' + (ch - 'a' + oteleme) % 26;
        }

        printf("%c", ch);
    }

    printf("\n");

    return 0;
}

