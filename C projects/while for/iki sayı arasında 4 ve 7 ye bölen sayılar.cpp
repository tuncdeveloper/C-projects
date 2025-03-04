#include<stdio.h>
int main(){
	
	int x,y,z,a,i ;
	
	printf("ilk sayi gir = ");scanf("%d",&x);
	printf("son sayi gir = ");scanf("%d",&y);
	
	
	
	for(i=x;i<=y;i++)
	{
		z=i;
		
		if(z%4==0 && z%7==0)
		{
			printf("%d\n",z);
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
