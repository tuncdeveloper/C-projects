#include<stdio.h>
int main(){
	
	
	int x,z,a=0,b=0,c=0;
	
	float i=0,y=0;
	
	
	for(;;)
	{
		printf("Kilo giriniz : ");scanf("%d",&x);
		
		if(x==0)
		{
			break;
		}
		
		if(x<50)
		{
			a=a+1;
		}
		
		else if(50<=x && 70>x)
		{
			b=b+1;
		}
		
		else if(70<=x)
		{
			c=c+1;
		}
			i=i+1;
			
			y=y+x;
	}
	
		
		printf("toplam %.0f sporcu girilmistir\n\n",i);
		printf("%d hafif , %d orta ve %d agir siklet vardir\n",a,b,c);	
		printf("Genel ortalama : %.0f/%.0f = %.2f",y,i,y/i);	
	
	
	
	return 0;
}
