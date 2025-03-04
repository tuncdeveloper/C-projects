#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000 // Girdi cümlesi için maksimum karakter sayýsý

int main() {
    char sentence[MAX_LEN]; // Girdi cümlesi
    char word[MAX_LEN]; // Girdi kelimesi
    char delims[] = " \t\n"; // Ayýrýcý karakterler
    char *token; // Kelime iþaretçisi
    int count = 0; // Kelime sayacý
    int kelime = 0; // Aranan kelimenin sýra numarasý

    printf("Lutfen bir cumle girin: ");
    fgets(sentence, MAX_LEN, stdin); // Cümleyi girdi olarak oku
    sentence[strcspn(sentence, "\n")] = '\0'; // fgets() sonrasý oluþan newline karakterini kaldýr
    
    printf("Lutfen aranacak bir kelime giriniz: ");
    fgets(word, MAX_LEN, stdin); // Kelimeyi girdi olarak oku
    word[strcspn(word, "\n")] = '\0'; // fgets() sonrasý oluþan newline karakterini kaldýr

    token = strtok(sentence, delims); // Ýlk kelimeyi ayýr
	
    // Kelimeleri ayýr ve say
    while (token != NULL) {
    
	    count++; // Kelime sayacýný arttýr
	    
	    if (strncmp(token, word, strlen(word)) == 0) {
            kelime = count;
    		break;        
        }
			    
        token = strtok(NULL, delims); // Sonraki kelimeyi ayýr
    	
	}

	
    if (kelime != 0) {
        printf("Aranacak kelime ilk kez %d. sira görülmüstür.\n", kelime);
    } else {
        printf("Aranacak kelime cumlede bulunamamistir.\n");
    }

    return 0;
}

