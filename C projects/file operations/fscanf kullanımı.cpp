#include<stdio.h>
#include<stdlib.h>

int main(){
    
	FILE *dosya;
    
	dosya=fopen("Cdeneme.txt","w");
	
	fprintf(dosya,"ferhat tunc");
    
    fclose(dosya);
    
    
    
    return 0;
}

