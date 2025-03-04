#include<stdio.h>
#include<stdlib.h>

int main(){
	
	printf("girilen 5 sayidan tersini yazan algoritma \n\n");
	
	int i,j;
	int dizi[6];
	printf("a dizisi : \n\n");
	for(i=0;i<3;i++){
		
		scanf("%d",&dizi[i]);
		
	}
	
	printf("\nb dizisi : \n\n");
	for(i=3;i<6;i++){
		scanf("%d",&dizi[i]);
		
	}
	
	printf("\nc dizisi : \n\n");
	for(i=0;i<3;i++){
		
		printf("%d %d ",dizi[i],dizi[i+3]);
	}
	
	
	return 0;
}
