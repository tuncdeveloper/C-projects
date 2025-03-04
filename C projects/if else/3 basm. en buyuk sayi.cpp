#include<stdio.h>
int main(){
	//3 basamaklý bir sayiya gir en büyük olacak þekilde yer degistir ...			459 abc
	int x,y,z,c,b,a ;
	
	printf("sayi gir = ");
	scanf("%d",&x);
	
	c=x%10 , a=x/100 , y=x/10	, b=y%10 ;
	
	if(c>a && c>b)
	{
		if(b>a)
			{
				printf("%d%d%d",c,b,a);
			}
		else if(a>b)
			{
				printf("%d%d%d",c,a,b);
			}	
	}
	
	
	
	else if(a>b && a>c)
	{
		if(c>b)
			{
				printf("%d%d%d",a,c,b);
			}
		else if(b>c)
			{
				printf("%d%d%d",a,b,c);
			}	
	}
	
	
	
	else if(b>a && b>c)
	{
		if(c>a)
			{
				printf("%d%d%d",b,c,a);
			}
		else if(a>c)
			{
				printf("%d%d%d",b,a,c);
			}	
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
