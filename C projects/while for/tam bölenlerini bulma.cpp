#include<stdio.h>
int main(){
	
	
	int x,i,a=0 ;
	
	
	printf("sayi gir = "); scanf("%d",&x);
	
	
	for(i=1;i<=x;i++)
	{
		
		if(x%i==0)
		{
			printf("%d ",i);
			a=a+i;
		}
		
		
	}
		printf("\n%d",a);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
