#include<stdio.h>
int main()
{
	//biti� ve zaman aras�nda ka� art�k y�l vard�r..
	
	int x,y,z,i;
	
	printf("baslang�c yl�l�na giriniz = ");
	scanf("%d",&x);
	
	printf("bitis y�l�na giriniz = ");
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
