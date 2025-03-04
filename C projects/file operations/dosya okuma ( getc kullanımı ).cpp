#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *dosya;
    char karakter;
    
    dosya = fopen("C:\\Users\\Lenovo\\Desktop\\Cdeneme.txt", "r"); // read dosya okuma 
    
    
    karakter = getc(dosya);	// getc dosyadan alýr
    
    while(karakter != EOF){
       
	    printf("%c", karakter);
        karakter = getc(dosya);
    
	}
    
    fclose(dosya);
    
    return 0;
}

