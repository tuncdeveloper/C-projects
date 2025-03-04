#include<stdio.h>
int main(){
	
	
	int i,j,x;
	printf("sayi gir : ");scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		for(j=x-2;j+i>=x;j--)
		{
			printf(" ");
		}
	
		for(j=5;i<=j;j--)
		{
			printf(" *");
		}
		printf("\n");
		
	}
	
	

	
	
	
	
	
	
	
	
	return 0;
}
