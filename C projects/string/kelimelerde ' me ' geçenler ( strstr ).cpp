#include <stdio.h>
#include <string.h>

int main() {
    char words[][20] = {"merhaba", "ben", "bir", "merve", "halime", "iyiyim", "te�ekk�rler", "naber", "semden", "g�zel"};
    int i;
    
    for(i = 0; i < 10; i++) {
    	
        if(strstr(words[i], "me") != NULL) {
            
			printf("%s\n", words[i]);
        }
    }
    
    return 0;
}

