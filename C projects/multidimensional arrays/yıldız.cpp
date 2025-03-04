#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	
	int x,y;
	
	printf("diziinin botuytynalarina giriniz : ");scanf("%d",&x);scanf("%d",&y);
	
	int dizi[x][y];
	
	
	int i,j;
	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			
			printf("*");
		}
		printf("\n");
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
