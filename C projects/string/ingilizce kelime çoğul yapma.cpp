#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char string[100];
    
    printf("Kelimeyi giriniz: ");
    
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0'; 
    
    int n = strlen(string);
    
    
	if (strncmp(string + n - 1, "y", 1) == 0) {
        string[n - 1] = '\0';
        strcat(string, "ies");
    }
    
    else if (strncmp(string + n - 1, "s", 1) == 0 || strncmp(string + n - 2, "ch", 2) == 0 || strncmp(string + n - 2, "sh", 2) == 0) {
        strcat(string, "es");
    }
    
    else if (isalpha(string[0])) {
        strcat(string, "s");
    }
    
    printf("%s\n", string);
   
    return 0;
}

