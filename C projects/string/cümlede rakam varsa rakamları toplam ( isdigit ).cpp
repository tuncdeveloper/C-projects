#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];
    
    printf("Lutfen cumle giriniz: ");
    fgets(string, sizeof(string), stdin);
   
    int i, top = 0;
    int n = strlen(string);
	
    for (i = 0; i < n; i++) {
        if (isdigit(string[i])) {
            top = top + (string[i] - '0');
        }
    }
   	
    printf("\nToplam: %d\n", top);
    
    return 0;
}

