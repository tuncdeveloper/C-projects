#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int matris[3][3];
	int transpose[3][3];
	int satir = 0,sutun = 0;
	
	printf("\n3x3'luk matrisin degerlerini giriniz \n\n");
	for( satir = 0 ; satir < 3; satir++ ){
		
		for (sutun = 0; sutun< 3; sutun++){
			
			printf("Matrisin [%d][%d] elemani : ",satir+1,sutun+1);
			
			scanf("%d",&matris[satir][sutun]);
			
			transpose[sutun][satir] = matris[satir][sutun];
		}
	}
	
	
	printf("\nMatris\tve\tTranspozu\n");
	
	
	for( satir= 0 ; satir < 3; satir++ ){
		
		for ( sutun = 0; sutun< 3; sutun++){
			
			printf("%d ",matris[satir][sutun]);
		}
			
		printf("\t\t"); // 2 tab boyutu bosluk birakir
		
		for ( sutun = 0; sutun< 3; sutun++){
			
			printf("%d ",transpose[satir][sutun]);
		}
		printf("\n");
	}
return 0;
}

