#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000 // Girdi c�mlesi i�in maksimum karakter say�s�

int main() {

    char sentence[MAX_LEN]; // Girdi c�mlesi
    char delims[] = " \t\n"; // Ay�r�c� karakterler
    char *token; // Kelime i�aret�isi
    int count = 0; // Kelime sayac�

    printf("Lutfen bir cumle girin: ");
    fgets(sentence, MAX_LEN, stdin); // C�mleyi girdi olarak oku

    token = strtok(sentence, delims); // �lk kelimeyi ay�r

    // Kelimeleri ay�r ve say
    
    while (token != NULL) { // Ayn� dizgiyi par�alamaya devam etmek i�in " delims " dizgisi yerine NULL verilir . " sentence " dizgsinde " delims " dizgisi kalmam��sa NULL d�d�r�l�r . 
    
	    count++; // Kelime sayac�n� artt�r
    
	    token = strtok(NULL, delims); // Sonraki kelimeyi ay�r
    }

    printf("Girilen cumlede %d adet kelime var.\n", count);

    return 0;

}


