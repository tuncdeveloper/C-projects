#include<stdio.h>
int main(){
	
	int x,i,enb=0,enk=1 ,k=1;
		
		
	for(i=1;i<=5;i++)
	{
		printf("sayi gir : ");scanf("%d",&x);
		
		if(k==1)		
		{
			enb=x;		
			enk=x;
			k=0;
		}
		
		
		else				
		{
			if(enb<x)
				enb=x;
				
			if(enk>x)
				enk=x;
			
		}
		
	}
		printf("en buyuk sayi : %d\n",enb);
		printf("en kucuk sayi : %d",enk);
	return 0;
}

