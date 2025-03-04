#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char words[][MAX_LEN] = {"betül","mina","cem","husdyin","ragnar","langterha"}; 
     
    int count = 0;
    
    int dizi[10];
    int i, j, n;
    char temp[MAX_LEN]; // temp değişkeni bir karakter dizisi olarak tanımlandı
    
    for(i = 0; i < 6; i++) {
        n = strlen(words[i]);
        dizi[i] = n;
    }
	
    for(i = 0; i < 6; i++) {
        
		for(j = i + 1; j < 6; j++) {
        
		    if(dizi[j] > dizi[i]) {
                // dizi elemanları sıralanırken words dizisindeki ilgili elemanlar da sıralanıyor
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
                // dizi elemanları da sıralanıyor
         
		        int temp2 = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp2;
        
		    }
        }
    }
  	
    for(i = 0; i < 6; i++) {
        printf("%s \n", words[i]);
    }
  	
  	printf("\n\nEn uzun kelime: %s\n", words[0]);

  
    return 0;
}

