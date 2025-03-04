#include <stdio.h>
int main()
{
	int x,i,j ;
	
	printf("sayi gir : ");scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x-i;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
			printf("\n");
	}
	
	for(i=1;i<=x-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=2*x-2*i-1;j++)
		{
			printf("*");
		}
		
			printf("\n");
	}
	
	
	
	
		
	
		
	return 0 ;	
}
