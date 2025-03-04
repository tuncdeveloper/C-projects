#include<stdio.h>
int main(){
	
	int x,a=0,i=1 ;
	int enb ;
	
	printf("sayi gir = ");scanf("%d",&x);
	
	enb=x;	
							
	while(x>=0)
	{			
		printf("sayi gir = ");scanf("%d",&x);
		
		if(enb<x)
		{   
			enb=x;
			
		}
		
		i++;
	}
				printf("en buyuk sayi = %d",enb);
	
	return 0;
}
