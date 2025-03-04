#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Turkish");
	
    char soru[100];
    
    int birim[4];
    
    
    printf("4 sayýnýn toplamý : ");
    fgets(soru, 100, stdin);

    sscanf(soru,"%d %d %d %d", birim, birim+1, birim+2,birim+3);
	int top=0;
	for(int i=0;i<4;i++){
		
		
		top=top+birim[i];
	printf("%d ",birim[i]);
	}

printf("\n%d",top);
    return 0;
}

