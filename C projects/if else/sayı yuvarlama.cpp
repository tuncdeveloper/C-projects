#include<stdio.h>
int main(){
	
		//4 basamklý sayi girin binlere yuvarlayýn(son 2 rakam 0 olsun ) ornek : 1869 , 1900 ...
	
	
	int x,y,z,a,b,c,birler,onlar,yuzler,binler;

	printf("sayi gir = ");
	scanf("%d",&x);
	
	birler=x%10;
	binler=x/1000;
	
	a=x/10;
	onlar=a%10;
	
	b=x/100;									
	yuzler=b%10;
	
	
	if(onlar>=5)
	{
		onlar=0 , birler=0 , yuzler=yuzler+1 ;
		printf("%d%d%d%d",binler,yuzler,onlar,birler);
	}
	
	else if(onlar<5)
	{
		onlar=0 , birler=0 ;
		printf("%d%d%d%d",binler,yuzler,onlar,birler);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
