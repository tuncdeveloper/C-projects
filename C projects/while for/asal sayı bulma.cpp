#include<stdio.h>
int main(){
	
	int x,i,durum=0;
	
	printf("sayi gir = ");scanf("%d",&x);
	
	
	
	for(i=2;i<x;i++)
	{
		if(x%i==0)	
		{
		printf("DEGÝL");
		durum=1; 
		break ;
			
					}					
	}

	if(durum==0)
		printf("ASAL"); 
	
	
	
	
	
	
	
	return 0;
}
