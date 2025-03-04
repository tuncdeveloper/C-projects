#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
int main(){
	
	
	 setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	int i,j;
	
	int matris[7][7];
	

	
	
	
	printf("\tmaatrisin normal halli\n");
	
	for(i=0;i<7;i++){
		
		for(j=0;j<7;j++){
		
			
		matris[i][j]=rand()%49+1;
		
		}
		
		
	}
	
	for(i=0;i<7;i++){
		
		for(j=0;j<7;j++){
		
			
		printf(" %d ",matris[i][j]);
		
		}
		
		printf("\n");
	}
	
	return 0;
}
