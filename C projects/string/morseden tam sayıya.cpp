#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char binary[11];
    
    int decimal = 0;
    
	int i, j=0;

    printf("Lutfen en fazla 10 basamakli bir ikilik sayi giriniz: ");
    scanf("%s", binary);

    // Binary stringinin her bir karakterini dönüþtürme iþlemi
    
	for (i = strlen(binary) - 1; i >= 0; i--) {
    
	    if (binary[i] == '.') {
            decimal += pow(2, j);
        }
    
    	j++;
	}

    printf("Onluk sistemde karsiligi: %d\n", decimal);

    return 0;
}

