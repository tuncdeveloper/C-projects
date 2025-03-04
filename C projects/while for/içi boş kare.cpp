#include<stdio.h>
int main(){
	
	
	int i,j,x ;
	
	printf("sayi gir : ");scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		if(i==1)
		{
			for(j=1;j<=x;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		
		else if(i==x)
		{
			for(j=1;j<=x;j++)
			{
				printf("* ");
			}
		}
							
		else
		{
			for(j=1;j<=x;j++)
			{
				if(j==1 ||j==x)
				{
					printf("* ");
				}
				
				else 
				printf("  ");
			}
			printf("\n");
		}
		 
	}
	
	
	
	

	
	
	return 0;
}
