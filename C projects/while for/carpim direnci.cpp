#include<stdio.h>
int main(){
	
	int x,y,a,b,i,j,sayac=0,durum=1;
	
		printf("sayi giriniz : ");scanf("%d",&x);
		y=x;
	
	while(x>99)
	{
		printf("hata tekrar\n");
		printf("sayi giriniz : ");scanf("%d",&x);
		y=x;
	}

	while(x>=10)
	{
			
		
			a=x/10;
			b=x%10;
			x=a*b;
			sayac=sayac+1;
	
	
	}
	
		printf("%d sayisinin carpim direnci %d",y,sayac);
	
	
	
			
	return 0;
}

