#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>

int karakter_sayisi(char *s) {
    
    int i;
    
    i = strlen(s);
    
	return i;
}

void fonk(char *kelime) {
    
	int i, n;
    
	n = karakter_sayisi(kelime);
    
	for (i = 0; i < n; i++) {
    
	    if (islower(kelime[i])) {
        
		    kelime[i] = toupper(kelime[i]);
        }
		
		 else if (isupper(kelime[i])) {
            kelime[i] = tolower(kelime[i]);
        }
    
	}
}

int main() {
    setlocale(LC_ALL, "Turkish");
    
	char cumle[50];
    

	printf("Cumleyi girin: ");	
	fgets(cumle, 50, stdin);
    
	
	fonk(cumle);
	printf("\nKüçük harfleri büyüðe, büyük harfleri küçüðe çevirilmiþ hali:\n\n %s\n", cumle);
    
	
	return 0;
}

