#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[20];
    int i, len, num = 0;

    printf("Lutfen ozel sayi sistemine gore bir sayi giriniz: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
       
	    if(str[i] == 'i') {
            num += 1;
        }
        
		else if(str[i] == 'u') {
            num += 10;
        }
        
		else if(str[i] == 'z') {
            num += 100;
        }
    
	}

    printf("Ondalik sistemde karsiligi: %d", num);

    return 0;
}

