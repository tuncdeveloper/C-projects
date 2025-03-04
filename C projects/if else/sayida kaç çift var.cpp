#include<stdio.h>
int main(){

	// 4 basamak girin  kaç tanesi çiftttir ..
	
	int x,y,a,birler,onlar;
	int k,r,m;
	int yuzler,binler;
	int n,p;
	
	printf("sayi gir = ");
	scanf("%d",&a);
																						//1568
	
	birler=a%10 , binler=a/1000 ;
	x=a/10 ,  onlar=x%10 ;
	y=a/100 , yuzler=y%10 ;
		
	
	if(birler%2==0)
	{
		k=1;
	}
	else 
	{
		k=0;
	}
	
	
	
	if(onlar%2==0)
	{
		r=1;
	}
	else
	{
		r=0;
	}
	
	
	
	if(yuzler%2==0)
	{
		m=1;
	}
	else 
	{
		m=0;
	}
	
	
	
	if(binler%2==0)
	{
		n=1;
	}
	else
	{
		n=0;
	}
	
		p=k+r+m+n ;
		printf("%d",p);

	
	
	return 0;
}
