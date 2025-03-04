#include<stdio.h>

//abcd , ab + cd =x , x*x =abcd  ....yarýmkare sayýsý
int main(){

int ab,k,x,onlar,birler,abcd;

printf("sayi gir : ");
scanf("%d",&abcd);

ab=abcd/100;
birler=abcd%10;

k=abcd/10;
onlar=k%10;

x=ab+birler+10*onlar;

if(x*x==abcd)
{
	printf("sayi YARÝMKARE dir");
}
else
{
	printf("sayi yarimkare degildir");
}
	
	
	
	return 0;
}
