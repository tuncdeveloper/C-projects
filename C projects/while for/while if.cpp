
#include<stdio.h>
int main(){
	
	//girilen 5 sayinin en büyüðü...
	int x,i=1,enb;
	enb=x;
	
	printf("sayi gir=");
	scanf("%d",&x);
	
	while(i<5)
	{
		
		printf("sayi gir=");
		scanf("%d",&x);
		
		if(enb<x)
		{
			
			enb=x;
			
		}	
		
		i++;
	}
	
		printf("en buyuk sayi = %d",enb);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
