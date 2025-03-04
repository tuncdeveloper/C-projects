#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SENTENCE_LENGTH 100

int main() {
    char sentence[MAX_SENTENCE_LENGTH + 1]; // +1, ��nk� son karakter NULL karakteri olacak
    printf("Morse kodunu giriniz: ");
    fgets(sentence, MAX_SENTENCE_LENGTH, stdin);
    
    // fgets, sat�r sonu karakterini de dahil eder, bu y�zden onu kald�r�n
    sentence[strcspn(sentence, "\n")] = '\0';
    
    char bahr_kodu[MAX_SENTENCE_LENGTH * 2 + 1]; // maksimum harf say�s� 2 kat�na ��kabilir
    int j = 0;
    
    for (int i = 0; i < strlen(sentence); i++) {
       
	    if (sentence[i] == '-') {
            strncpy(bahr_kodu + j, "da", 2);
            j += 2;
        } 
		
		else if (sentence[i] == '.') {
            strncpy(bahr_kodu + j, "di", 2);
            j += 2;
        }
		
		 else if (isspace(sentence[i])) {
            strncpy(bahr_kodu + j, " ", 1);
            j += 1;
        }
		
		 else {
            // istenmeyen karakterlerdeki hatalar� �nlemek i�in burada bir hata mesaj� yazd�r�n
            printf("Hata: '%c' ge�ersiz bir karakterdir.\n", sentence[i]);
            return 1; // hata durumunu i�aret etmek i�in farkl� bir ��k�� kodu kullanabilirsiniz
        }
    
	
	}
    
    bahr_kodu[j] = '\0';
    printf("\nBahr kodu: %s\n", bahr_kodu);
    
    return 0;
}

