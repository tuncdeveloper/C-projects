#include<stdio.h>
int main()
{
	//bitiþ ve zaman arasýnda kaç artýk yýl vardýr..
	
	int x,y,z,i;
	
	printf("baslangýc ylýlýna giriniz = ");
	scanf("%d",&x);
	
	printf("bitis yýlýna giriniz = ");
	scanf("%d",&y);
	
	
	if(x%4==0)
	{
		z=x-4;
		
		while(z<y)
		{	
			z=z+4;
			if(z<=y)
			{
			printf("%d\n",z);
			}
		}
			
	}	
	
		else if(x%4==1)
	{
		z=x-1;
		
		while(z<y)
		{
			z=z+4;
			if(z<=y)
			{
			
			printf("%d\n",z);
			}
		}
	}		
			
		else if(x%4==2)
	{
		z=x-2;
		
		while(z<y)
		{
			z=z+4;
			if(z<=y)
			{
			printf("%d\n",z);
			}
		}
	}		
			
		else if(x%4==3)
	{
		z=x-3;
		
		while(z<y)
		{
			z=z+4;
			if(z<=y)
			{
			printf("%d\n",z);
			}
		}
	}		
	
	

	return 0;
}
