#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[100];
   
    printf("Lutfen bir cumle girin: ");
   
    fgets(sentence, 100, stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // fgets ile alýnan girdinin sonunda yer alan '\n' karakterini kaldýrýyoruz.

    int i;
    int a = 0;
    int b = 0;
   
    for (i = 0; i < strlen(sentence); i++) {
        
		if (strchr("aeiouAEIOU", sentence[i])) {
            a++;
        } 
		
		 else if (isalpha(sentence[i])) {
            b++;
        }
 
    }
   
    printf("\nsesli : %d\n", a);
    printf("\nsessiz : %d", b);

    return 0;
}
