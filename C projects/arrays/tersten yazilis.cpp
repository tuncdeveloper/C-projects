#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("girilen 5 sayidan tersini yazan algoritma \n\n");
	
	int dizi[4];
	int i;
	
	printf("5 sayi gir : \n\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	
	printf("girilen sayilarin tersten yazilisi : \n\n");
	for(i=3;i>=0;i--)
	{
		printf("%d\n",dizi[i]);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
