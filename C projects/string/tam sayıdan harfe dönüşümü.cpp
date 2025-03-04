#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printChar(char c, int n) {
    for(int i = 0; i < n; i++) {
        printf("%c", c);
    }
}

void fonk(int num , char *s){
    
    int x=num;
    int dizi[50];
    int i = 0;
    
    while(x!=0 && i < 3) {

        dizi[i] = x % 10;
        x /= 10;
        i++;
    }
    
    for(int j = i-1; j >= 0; j--) {
        printChar(s[j], dizi[j]);
    }

}

int main() {
    
    int sayi;
    char str[4] = {'i', 'u', 'z'};
	
    printf("Lutfen bir tam sayi giriniz: ");
    scanf("%d", &sayi);
    printf("özel sayi karsiligi : ");
	
    fonk(sayi, str);
    
    return 0;
}

