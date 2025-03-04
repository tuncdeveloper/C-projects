#include<stdio.h>
int main(){
	

int i,j,x;
	printf("Taban uzunluk:");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x-i;j++)
		{
			printf(" ");
		}
	
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		
	}
  	
	return 0;
}
