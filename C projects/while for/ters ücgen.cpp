#include<stdio.h>
int main(){


	int x,i,j;

	printf("sayi gir : ");scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		for(j=x;j>=x-i;j--)
		{
			printf(" ");
		}
	
		for(j=x;j>=i;j--)
		{
			printf(" *");
		}
		printf("\n");
	}
















		return 0; 
		}	
