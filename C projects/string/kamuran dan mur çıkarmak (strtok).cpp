#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000 // Girdi cümlesi için maksimum karakter sayýsý

int main() {
    char s1[MAX_LEN]; // Girdi cümlesi
    char s2[MAX_LEN]; // Girdi kelimesi
    
    printf("Lutfen birinci sayiya girin: ");
    fgets(s1, MAX_LEN, stdin); 
    s1[strcspn(s1, "\n")] = '\0'; 

    printf("Lutfen ikinci sayiya girin: ");
    fgets(s2, MAX_LEN, stdin); 
    s2[strcspn(s2, "\n")] = '\0'; 

  	char *token = strtok(s1, s2); // s1 dizisini s2 ile böl
  
  	while (token != NULL) { // token NULL olmadýðý sürece
  		
		printf("%s", token); // token'ý ekrana yazdýr
  		token = strtok(NULL, s2); // bir sonraki tokený al
  	}
  	
	return 0;
}

