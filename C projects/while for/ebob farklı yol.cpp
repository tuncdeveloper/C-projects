#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	
int	x,y,a=0,b=0 ,c;
	
	printf("sayi gir :");scanf("%d",&x);
	printf("sayi gir :");scanf("%d",&y);	
		
	while(x!=y)
	{
		
		if(x>y)
		{
			x=(x-y);
		}
		
		else if(y>x)
		{
			y=(y-x);
		}
	}
		
	
		printf("ebobu : %d\n",x);
	/*		
			x	y	x-y		y-x	
			32	24	8			
			8	24			16	
			8	16			8	
			8	8			0	
								*/
	
	
	
	
	
	
	
	
	return 0;
}
