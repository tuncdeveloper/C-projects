#include<stdio.h>
int main(){
	
	int x;
	
	for(;;)
	{
		printf("sayi giriniz : ");scanf("%d",&x);
		
		if(x>0)
			break;
			
		else if(x<=0)
			printf("HATA tekrar giriniz!!!!\n");
	}
	

	
	
	for(;;)
	{
		printf("%d ",x);
		
		if(x==1)
			break;
			
		if(x%2==0)
			x=x/2;
		
		else
			x=3*x+1;
						
	}
	
	

	
	return 0;
}
