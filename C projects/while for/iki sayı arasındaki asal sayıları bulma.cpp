#include<stdio.h>
int main(){
	
	
	int x,i,y,j,durum=0;
	
	
	printf("sayi gir = "); scanf("%d",&x);
	printf("sayi gir = "); scanf("%d",&y);
	
	for(i=x;i<=y;i++)
	{
		durum=0;	 
		for(j=2;j<i;j++)
		{		
			if(i%j==0)
			{	
				durum =1 ;
				break;
			}	
				
		}
		
		if(durum==0)	
		printf("%d\n",i);
	}
	
	
	
	
	return 0;
}
