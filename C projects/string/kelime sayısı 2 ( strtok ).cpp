#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000 // Girdi cümlesi için maksimum karakter sayýsý

int main() {

    char sentence[MAX_LEN]; // Girdi cümlesi
    char delims[] = " \t\n"; // Ayýrýcý karakterler
    char *token; // Kelime iþaretçisi
    int count = 0; // Kelime sayacý

    printf("Lutfen bir cumle girin: ");
    fgets(sentence, MAX_LEN, stdin); // Cümleyi girdi olarak oku

    token = strtok(sentence, delims); // Ýlk kelimeyi ayýr

    // Kelimeleri ayýr ve say
    
    while (token != NULL) { // Ayný dizgiyi parçalamaya devam etmek için " delims " dizgisi yerine NULL verilir . " sentence " dizgsinde " delims " dizgisi kalmamýþsa NULL dödürülür . 
    
	    count++; // Kelime sayacýný arttýr
    
	    token = strtok(NULL, delims); // Sonraki kelimeyi ayýr
    }

    printf("Girilen cumlede %d adet kelime var.\n", count);

    return 0;

}


