#include<stdio.h>
int main(){
	
	int x,y,z,a,b,c ;
	
	
	
	printf("ilk sayi : ");scanf("%d",&x);
	printf("ikinci sayi : ");scanf("%d",&y);
	
	a=x%y;
	
	for(;;)
	{	
		x=y;
		y=a;
		a=x%y;
		
		if(a==0)
		{
			printf("ebobu : %d",y);break;
		}
			
	}
	
	
	
	
	return 0;
}
