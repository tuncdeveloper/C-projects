#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void fonk(int A[][3]){
	
	int temp;
	int k ,i,j;
	
	
	for(k=0;k<3;k++){
		for(i=0;i<3;i++){
			
			for(j=0;j<3-1;j++){
				
				if(A[j][k]>A[j+1][k]){
				
				temp=A[j][k];
				A[j][k]=A[j+1][k];
				A[j+1][k]=temp;
			}
			
			}
		}
		
	}	
	
}

int main(){
	setlocale(LC_ALL, "Turkish"); 
	
	
	int i,j;
	int matris[3][3];
	
	printf("3x3 matrisin deðerlerine giriniz : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			scanf("%d",&matris[i][j]);
		}
	}
	
	
	printf("\nmatrisin normal hali : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("   %d  ",matris[i][j]);
		}
		printf("\n");
	}
	

	fonk(matris);
		
	printf("\nmatrisin sýralanmýsþ hali : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("   %d  ",matris[i][j]);
		}
		printf("\n");
	}
			
	return 0;
}
