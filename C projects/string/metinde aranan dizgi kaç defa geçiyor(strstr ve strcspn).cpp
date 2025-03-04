#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char words[MAX_LEN+1]; // Ekstra bir karakter i�in yer a��ld�
    char search[MAX_LEN+1]; // Ekstra bir karakter i�in yer a��ld�
    int count = 0;
    
    printf("Metni girin: ");
    fgets(words, MAX_LEN, stdin);
    words[strcspn(words, "\n")] = '\0'; // fgets sonras�nda eklenen "\n" karakterini kald�r�r
   
    printf("Aranacak dizeyi girin: ");
    fgets(search, MAX_LEN, stdin);
    search[strcspn(search, "\n")] = '\0'; // fgets sonras�nda eklenen "\n" karakterini kald�r�r
   
    // Aranacak dizeyi bulmak i�in strstr() fonksiyonu kullan�l�r
    char* pos = words;
    int len = strlen(search);
    while ((pos = strstr(pos, search)) != NULL) {
        count++;
        pos += len; // bulunan dizenin sonras�ndan aramaya devam etmek i�in
    }
    
    printf("'%s' dizesi metinde %d kez ge�iyor.\n", search, count);
    return 0;
}

