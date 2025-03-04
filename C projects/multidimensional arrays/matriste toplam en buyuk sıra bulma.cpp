#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
int main(){
	
	
	 setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	int i,j;
	
	int matris[4][4]={1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2};

	int a,b;
		
		
    for(i=0; i<4; i++) {
        for(j=0; j<4; j++) {
            
			printf("  %d ",matris[i][j]);
        }
        printf("\n");
    }
    int toplam=0;
    int maxtoplam=0;
	int sira;
	for(i=0; i<4; i++) {
        
		toplam=0;
		for(j=0; j<4; j++) {
            
            toplam=toplam+matris[i][j];
            
			if(toplam>maxtoplam){
				
				maxtoplam=toplam;
				sira=i;	
			}
		
        }
        
    }	
	
		printf("\nsatýrlarýn arasýnda toplam en buyukk sýra : %d\nsýra numaralarýn toplamý : %d",sira+1,maxtoplam);

	return 0;
}
