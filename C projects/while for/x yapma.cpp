#include<stdio.h>
int main(){
	
	int i,j,x;

	printf("sayi gir : ");scanf("%d",&x);
	
	
	for(i=1;i<=2*x-1;i++)
	{
		for(j=1;j<=2*x-1;j++)
		{
		
			if(j==i)				// sola yatýk için
			
			{
				printf("*");
			}
			
			else if(j==2*x-i)
			{
				printf("*");
			}
			
			else
				printf(" ");
		}
		
			printf("\n");
		

	}
		

	
	
	
  	
	return 0;
}
