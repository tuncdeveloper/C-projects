#include<stdio.h>
#include<stdlib.h>
int fonk(int A[3][3]){
	
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
		if(	A[i][j]!=A[j][i])	
			return 0;
		
		
		
			
		}
	}
	
		return 1;
}
int main(){
	
	int i,j;
	
	
	int matris[3][3]={1,2,3,2,5,4,3,4,9};
	
	
	printf("\n\nmatrisin normal hali \n\n");
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			printf(" %d ",matris[i][j]);
			
		}
		
		printf("\n");
	}
	
	if(fonk(matris)==1)
			printf("simetrictir");
	
	else
		printf("degildir hayir");
		
		return 0;
}
