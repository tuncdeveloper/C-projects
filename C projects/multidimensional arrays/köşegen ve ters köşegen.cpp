#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	
	int dizi[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	
	
	int i,j;
	
	for(i=0;i<5;i++){
	
		for(j=0;j<5;j++){
				
		if(i==j || i+j==4)
			printf(" %d ",dizi[i][j]);
			
		else
			printf(" ");	
		}
		
		
		printf("\n");
		
	}
		
	return 0;
}
