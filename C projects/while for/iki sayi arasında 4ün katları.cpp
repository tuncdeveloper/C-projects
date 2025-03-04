#include<stdio.h>
int main(){
	int x,y,i;
	
	printf("ilk sayi gir = ");scanf("%d",&x);
	printf("son sayi gir = ");scanf("%d",&y);
	
	
	for(i=x;i<=y;i++)
	{
		
		if(i%4==0)
		{
			printf("%d\n",i);
		}
		
	}
			
	return 0;
}
