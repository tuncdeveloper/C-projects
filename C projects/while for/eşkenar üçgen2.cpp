#include<stdio.h>
int main(){
	
	
	int i,j,x,yildiz,bosluk;
	printf("sayi gir : ");scanf("%d",&x);
	
	yildiz=1;
	bosluk=x-1;
	
	
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=bosluk;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=yildiz;j++)
		{
			printf("*");
		}
		
		printf("\n");
		
		bosluk--;
		yildiz=yildiz+2;
		
		
	}
	
	

	
	
	
	
	
	
	
	
	return 0;
}
