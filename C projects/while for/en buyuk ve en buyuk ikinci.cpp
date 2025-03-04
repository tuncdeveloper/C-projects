#include<stdio.h>
int main()
{
	
	int x,i,j,enb,y,k=1 ;

	
	for(i=1;i<=4;i++)
	{
		printf("%d. sayi gir : ",i);scanf("%d",&x);
		
		if(k==1)
		{
			enb=x;
			k=0;
		}
		
		if(k==1)
		{
			y=enb;
			k=0;
		}
		
		else
		{
			if(y>enb)
			{
				y=enb;
			}
		}
		
	}
			printf("en buyuk : %d\n",enb);
			printf("ikinci en buyuk : %d",y);
		
	
	
		
	
	
	return 0;
}
