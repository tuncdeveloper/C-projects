#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000 // Girdi c�mlesi i�in maksimum karakter say�s�

int main() {
    char sentence[MAX_LEN]; // Girdi c�mlesi
    char word[MAX_LEN]; // Aranan kelime
    
    printf("Lutfen cumle girin: ");
    fgets(sentence, MAX_LEN, stdin); 
    sentence[strcspn(sentence, "\n")] = '\0'; // fgets() taraf�ndan dahil edilen yeni sat�r karakterini kald�r�r
    
    printf("Lutfen aranacak kelimeyi girin: ");
    scanf("%s", word);
    
    int n = strlen(sentence);
    int i, j;
    











    // C�mle i�indeki son kelimeyi bul
    for(i=n-1;i>=0;i--){
        if(sentence[i] == ' '){
            break;
        }
    }
    
    char last_word[MAX_LEN];
    int last_word_index = 0;
    
    // Son kelimeyi al
    for(j=i+1;j<n;j++){
        
		last_word[last_word_index] = sentence[j];
        last_word_index++;
    
	}
    
	
	last_word[last_word_index] = '\0';
    
    // Son kelime ile aranan kelimeyi kar��la�t�r
    if(strcmp(last_word, word) == 0){
        printf("Aranan kelime cumlenin son kelimesinde var.\n");
    } else {
        printf("Aranan kelime cumlenin son kelimesinde yok.\n");
    }
    
    return 0;
}

