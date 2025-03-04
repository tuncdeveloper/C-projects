#include<stdio.h>
int main(){
	//3 basamaklý bir sayiya gir en küçük olacak þekilde yer degistir ...			459 abc
	int x,y,z,c,b,a ;
	
	printf("sayi gir = ");
	scanf("%d",&x);
	
	c=x%10 , a=x/100 , y=x/10	, b=y%10 ;
	
	
	
	
	
	if(c>a && b>a)
	{
		if(b>c)
			{	
				if(a==0)
					{
						printf("%d%d%d",c,a,b);
					}
				else
					{
						printf("%d%d%d",a,c,b);
					}	
			}
		else if(c>b)
			{	
				if(a==0)
					{				
						printf("%d%d%d",b,a,c);
					}
				else
					{
						printf("%d%d%d",a,b,c);
					}	
			}	
		else
			{
				printf("%d%d%d",b,c,a);
			}	
											
	}
	
	
	
	
	
		else if(c>b && a>b)
	{
		if(a>c)
			{	
				if(b==0)
					{
						printf("%d%d%d",c,b,a);
					}
				else
					{
						printf("%d%d%d",b,c,a);
					}	
			}
		else if(c>a)
			{	
				if(b==0)
					{				
						printf("%d%d%d",a,b,c);
					}
				else
					{
						printf("%d%d%d",b,a,c);
					}	
			}	
		else
			{
				printf("%d%d%d",b,c,a);
			}	
											
	}
	
	
	
	
	
		else if(a>c && b>c)
	{
		if(b>a)
			{	
				if(c==0)
					{
						printf("%d%d%d",a,c,b);
					}
				else
					{
						printf("%d%d%d",c,a,b);
					}	
			}
		else if(a>b)
			{	
				if(c==0)
					{				
						printf("%d%d%d",b,c,a);
					}
				else
					{
						printf("%d%d%d",c,b,a);
					}	
			}	
		else
			{
				printf("%d%d%d",c,b,a);
			}	
											
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
