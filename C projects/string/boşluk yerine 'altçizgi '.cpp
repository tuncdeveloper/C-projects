#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[100];
   
    printf("Lutfen bir cumle girin: ");
   
   	fgets(sentence, 100, stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // fgets ile al�nan girdinin sonunda yer alan '\n' karakterini kald�r�yoruz.

    for(int i = 0; strlen(sentence)>i; i++) {
    
	    if(isspace(sentence[i])){ // isspace fonksiyonu, belirtilen karakterin bo�luk karakteri olup olmad���n� kontrol eder.
            sentence[i] = '_';
        }
    }
    
    
    printf("\nCumlenin yeni heli : \n\n %s\n", sentence);

    return 0;
}

