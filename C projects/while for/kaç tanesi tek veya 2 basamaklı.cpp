#include <stdio.h>
	
int main() {
	
	int i=1,x,y,a=0,b=0 ;
		
	while(1)
	{
		printf("sayi :");
		scanf("%d",&y);
		
		if(y>=100)break;
		
		else if(y>=0 && y<=9)
		{
			a=a+1 ;
		}
		
		else if(y<100 && y>=10)
		{
			b=b+1;
			
		}
		
	}
	
		printf("girilen sayilardan %d tanesi iki basamaklı , %d tanesi tek basamaklidir",b,a);
	
	
	
	
  return 0;
}
