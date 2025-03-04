#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char words[][MAX_LEN] = {"betül","mina","cem","husdyin","ragnar","langterha"}; 
     
    int count = 0;
    
    int dizi[10];
    int i, j, n;
    char temp[MAX_LEN]; // temp deðiþkeni bir karakter dizisi olarak tanýmlandý
    
    for(i = 0; i < 6; i++) {
        n = strlen(words[i]);
        dizi[i] = n;
    }
	
    for(i = 0; i < 6; i++) {
        for(j = i + 1; j < 6; j++) {
            if(dizi[j] > dizi[i]) {
                // dizi elemanlarý sýralanýrken words dizisindeki ilgili elemanlar da sýralanýyor
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
                // dizi elemanlarý da sýralanýyor
                int temp2 = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp2;
            }
        }
    }
  	
    for(i = 0; i < 6; i++) {
        printf("%s \n", words[i]);
    }
  
  	
  
    return 0;
}

