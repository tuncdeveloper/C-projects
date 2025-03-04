#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SENTENCE_LENGTH 100

int main() {
    char sentence[MAX_SENTENCE_LENGTH + 1]; // +1, çünkü son karakter NULL karakteri olacak
    printf("Morse kodunu giriniz: ");
    fgets(sentence, MAX_SENTENCE_LENGTH, stdin);
    
    // fgets, satýr sonu karakterini de dahil eder, bu yüzden onu kaldýrýn
    sentence[strcspn(sentence, "\n")] = '\0';
    
    char bahr_kodu[MAX_SENTENCE_LENGTH * 2 + 1]; // maksimum harf sayýsý 2 katýna çýkabilir
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
            // istenmeyen karakterlerdeki hatalarý önlemek için burada bir hata mesajý yazdýrýn
            printf("Hata: '%c' geçersiz bir karakterdir.\n", sentence[i]);
            return 1; // hata durumunu iþaret etmek için farklý bir çýkýþ kodu kullanabilirsiniz
        }
    
	
	}
    
    bahr_kodu[j] = '\0';
    printf("\nBahr kodu: %s\n", bahr_kodu);
    
    return 0;
}

