#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000 // Girdi cümlesi için maksimum karakter sayýsý

int main() {
    char s1[MAX_LEN]; // Girdi cümlesi
    
    printf("Lutfen cumle girin: ");
    fgets(s1, MAX_LEN, stdin); 
    s1[strcspn(s1, "\n")] = '\0'; // fgets() tarafýndan dahil edilen yeni satýr karakterini kaldýrýr
    
    int k = 1, i, j;
    int n = strlen(s1);
    
    for (i = 0, j = n - 1; i < j; i++, j--) {
        
		while (!isalpha(s1[i])) i++; // i'nin bir harfi göstermesini saðlar
        while (!isalpha(s1[j])) j--; // j'nin bir harfi göstermesini saðlar
        
        
        if (s1[i] != s1[j]) { // Harflerin eþleþip eþleþmediðini kontrol eder
            
			k = 0;
            break;
        }
    }
    
    printf("%d", k);
    
    return 0;
}

