#include <stdio.h>
#include <string.h>
#include <ctype.h>

int fonk(char *sentence) {
    int i, n;
    n = strlen(sentence);

    for (i = 0; i < n; i++) {
        if (sentence[i] != sentence[n - 1 - i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char cumle[50];
    int sonuc;
	
    printf("Cumleyi girin: ");
    fgets(cumle,50,stdin);
	
	
    cumle[strcspn(cumle, "\n")] = '\0'; // \n karakterinin yerine null karakteri atanýyor
	
	
    sonuc = fonk(cumle);
	
	
    if (sonuc == 1) {
        printf("\n\npolindromedir");
    } else {
        printf("\n\npolindrome degildir");
    }

    return 0;
}

