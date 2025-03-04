#include <stdio.h>
	
int main() {
	
	int i,x,y,a=0,b=0 ;
	
	

	printf("kac adet sayi gir = ");scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{

		scanf("%d",&y);
		
		
		if(y>0)
		{
			
			a=a+1;
		}
		else
		{
			b=b+1;
		}
		
		
	
	}
	
		printf("girilen sayilardan %d tanesi pozitif , %d tanesi negatiftir",a,b);
	
	
	
	
  return 0;
}
