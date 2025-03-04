#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000 // Girdi c�mlesi i�in maksimum karakter say�s�

int main() {
    char s1[MAX_LEN]; // Girdi c�mlesi
    
    printf("Lutfen cumle girin: ");
    fgets(s1, MAX_LEN, stdin); 
    s1[strcspn(s1, "\n")] = '\0'; // fgets() taraf�ndan dahil edilen yeni sat�r karakterini kald�r�r
    
    int k = 1, i, j;
    int n = strlen(s1);
    
    for (i = 0, j = n - 1; i < j; i++, j--) {
        
		while (!isalpha(s1[i])) i++; // i'nin bir harfi g�stermesini sa�lar
        while (!isalpha(s1[j])) j--; // j'nin bir harfi g�stermesini sa�lar
        
        
        if (s1[i] != s1[j]) { // Harflerin e�le�ip e�le�medi�ini kontrol eder
            
			k = 0;
            break;
        }
    }
    
    printf("%d", k);
    
    return 0;
}

