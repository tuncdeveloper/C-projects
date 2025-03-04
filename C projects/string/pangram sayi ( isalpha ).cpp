#include <stdio.h>
#include <ctype.h>
#include <string.h>

int hesapla(char *cumle, int *alfabe) {
    
	int pangram = 1, harfSayisi = 0;
    
	for (int i = 0; i < strlen(cumle); i++) {
    
	    if (isalpha(cumle[i])) {  // karakter harf mi kontrol et
     
	        int index = tolower(cumle[i]) - 'a'; // harf indexini bul
     
	        if (!alfabe[index]) { // harf zaten say�lmam�� m� kontrol et
              
			    alfabe[index] = 1; // harf say�lmam��sa say
                harfSayisi++;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        if (!alfabe[i]) { // t�m harfler say�lmam�� m� kontrol et
            pangram = 0;
            break;
        }
    }
    return pangram;
}

int main() {
    int alfabe[26] = {0}; // t�m harflerin say�s�n� sakla
    char cumle[1000];
    printf("Bir cumle giriniz: ");
    fgets(cumle, sizeof(cumle), stdin);
    
	if (hesapla(cumle, alfabe)) {
        printf("Girilen cumle bir pangramdir.\n");
    }
	
	 else {
        printf("Girilen cumle bir pangram degildir.\n");
	}
	
	
    int harfSayisi = 0;
    for (int i = 0; i < 26; i++) {
        if (alfabe[i]) harfSayisi++; // say�lm�� harfleri say
    }
    printf("Cumle %d farkli harf iceriyor.\n", harfSayisi);
    return 0;
}

