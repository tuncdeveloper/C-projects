#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char words[MAX_LEN];
    char search[MAX_LEN];
    int count = 0;
    
    printf("Metni girin: ");
    fgets(words, MAX_LEN, stdin);
    printf("Aranacak dizeyi girin: ");
    fgets(search, MAX_LEN, stdin);
    search[strcspn(search, "\n")] = 0; // fgets sonras� olu�an new line karakterini siler
    
    char* ptr = words;
    while ((ptr = strstr(ptr, search)) != NULL) {
        count++;
        ptr++; // ilerleyerek di�er e�le�meleri kontrol eder
    }
    
    printf("'%s' dizesi metinde %d kez ge�iyor.\n", search, count);
    return 0;
}

