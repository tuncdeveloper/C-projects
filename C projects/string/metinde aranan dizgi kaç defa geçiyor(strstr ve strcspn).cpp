#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char words[MAX_LEN+1]; // Ekstra bir karakter için yer açýldý
    char search[MAX_LEN+1]; // Ekstra bir karakter için yer açýldý
    int count = 0;
    
    printf("Metni girin: ");
    fgets(words, MAX_LEN, stdin);
    words[strcspn(words, "\n")] = '\0'; // fgets sonrasýnda eklenen "\n" karakterini kaldýrýr
   
    printf("Aranacak dizeyi girin: ");
    fgets(search, MAX_LEN, stdin);
    search[strcspn(search, "\n")] = '\0'; // fgets sonrasýnda eklenen "\n" karakterini kaldýrýr
   
    // Aranacak dizeyi bulmak için strstr() fonksiyonu kullanýlýr
    char* pos = words;
    int len = strlen(search);
    while ((pos = strstr(pos, search)) != NULL) {
        count++;
        pos += len; // bulunan dizenin sonrasýndan aramaya devam etmek için
    }
    
    printf("'%s' dizesi metinde %d kez geçiyor.\n", search, count);
    return 0;
}

