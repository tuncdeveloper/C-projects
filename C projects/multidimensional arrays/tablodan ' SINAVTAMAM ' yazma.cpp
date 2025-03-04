#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Turkish"); 
	
	
	
	int i,j;
	int matris[6][5]={
					  {'A','J','K','P','Ü'},
					  {'B','Ý','L','R','V'},
					  {'C','I','M','S','Y'},
					  {'D','H','N','Þ','Z'},
					  {'C','G','O','T','.'},
					  {'Ç','F','Ö','U','?'}
					  };
	
	
	printf("\tTABLO\n");
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			
			printf("  %c ",matris[i][j]);
		}
		
		printf("\n");
	}
	
	int sayi;
	int dizi[10];
	
	for(int k=0;k<10;k++){
		
		scanf("%d",&sayi);
		
		dizi[k]=matris[sayi/10-1][sayi%10-1];
	}

	for(int k=0;k<10;k++){
		
		printf("%c",dizi[k]);
	}

	
	return 0;
}
