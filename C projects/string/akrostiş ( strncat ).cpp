#include <stdio.h>
#include <string.h>

int main() {
    char siir[4][100];
    char akrostis[5] = "";
    int i, j;
    
    printf("4 dizelik siiri giriniz: \n\n");
    for (i = 0; i < 4; i++) {
 
        fgets(siir[i], 100, stdin);
 
        
        strncat(akrostis, &siir[i][0], 1);
    
	}
    
    printf("\nAkrostis: %s\n", akrostis);
    
    return 0;
}

