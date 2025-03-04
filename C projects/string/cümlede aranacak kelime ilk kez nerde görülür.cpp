#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000 // Girdi c�mlesi i�in maksimum karakter say�s�

int main() {
    char sentence[MAX_LEN]; // Girdi c�mlesi
    char word[MAX_LEN]; // Girdi kelimesi
    char delims[] = " \t\n"; // Ay�r�c� karakterler
    char *token; // Kelime i�aret�isi
    int count = 0; // Kelime sayac�
    int kelime = 0; // Aranan kelimenin s�ra numaras�

    printf("Lutfen bir cumle girin: ");
    fgets(sentence, MAX_LEN, stdin); // C�mleyi girdi olarak oku
    sentence[strcspn(sentence, "\n")] = '\0'; // fgets() sonras� olu�an newline karakterini kald�r
    
    printf("Lutfen aranacak bir kelime giriniz: ");
    fgets(word, MAX_LEN, stdin); // Kelimeyi girdi olarak oku
    word[strcspn(word, "\n")] = '\0'; // fgets() sonras� olu�an newline karakterini kald�r

    token = strtok(sentence, delims); // �lk kelimeyi ay�r
	
    // Kelimeleri ay�r ve say
    while (token != NULL) {
    
	    count++; // Kelime sayac�n� artt�r
	    
	    if (strncmp(token, word, strlen(word)) == 0) {
            kelime = count;
    		break;        
        }
			    
        token = strtok(NULL, delims); // Sonraki kelimeyi ay�r
    	
	}

	
    if (kelime != 0) {
        printf("Aranacak kelime ilk kez %d. sira g�r�lm�st�r.\n", kelime);
    } else {
        printf("Aranacak kelime cumlede bulunamamistir.\n");
    }

    return 0;
}

