#include<stdio.h>
#include<stdlib.h>

int main(){
    
	FILE *dosya;
    
	char veri1[100]="Bilgisayar ";
    char veri2[100]="muhendisligi ";
    char veri3[100]="bolumu";
    
    dosya = fopen("C:\\Users\\Lenovo\\Desktop\\Cdeneme.txt", "w"); // read dosya okuma 
    
    fputs(veri1,dosya);
    fputs(veri2,dosya);
    fputs(veri3,dosya);
    
	fclose(dosya);
    
    return 0;
}

