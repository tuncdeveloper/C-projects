#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *dosya;
    char karakter[100];
    
    dosya = fopen("C:\\Users\\Lenovo\\Desktop\\Cdeneme.txt", "r"); // read dosya okuma 
    
    
    
    fgets(karakter,5,dosya);
    puts(karakter);
    
	fclose(dosya);
    
    return 0;
}

