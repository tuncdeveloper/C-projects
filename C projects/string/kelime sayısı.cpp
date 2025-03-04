#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    char cumle[101];
	char bosluk[]="\n\t";
	char *token;
	
    printf("Cumleyi girin: ");
    fgets(cumle, 101,stdin);

    int kelime_sayisi = 0;
	
	token=strtok(cumle,bosluk);
	
    for (int i = 0; token != NULL; i++) {
        
        
        kelime_sayisi++;
        
		token=strtok(NULL,bosluk);    
    
	}

    printf("\nCumlede %d kelime vardir.\n", kelime_sayisi+1);

    return 0;
}

