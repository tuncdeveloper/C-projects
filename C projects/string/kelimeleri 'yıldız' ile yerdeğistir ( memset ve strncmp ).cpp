#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char string[100];
    char kelime[3][10] = {"lan", "aptal", "inek"};
    
    printf("Bir cumle giriniz: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';
    
    int i, j;
    int n = strlen(string);
    
    for(i = 0; i < n; i++) {
       
	    for(j = 0; j < 3; j++) {
       
	        if(strncmp(string+i, kelime[j], strlen(kelime[j])) == 0) {
       
	            memset(string+i, '*', strlen(kelime[j]));
      
	            i = i + strlen(kelime[j]) - 1;
       
	            
       
	        }
        }
    }
    
    printf("%s", string);
    
    return 0;
}

