#include<stdio.h>

//  
int main(){

int x,y,z,birler,onlar,yuzler,binler,k;
printf(" sayi gir : ");
scanf("%d",&x);

binler=x/1000;
birler=x%10;

y=x/10;
onlar=y%10;

z=x/100;
yuzler=z%10;

	k=yuzler+binler+onlar+birler;
	
	if(k*k*k==x)
	{
	printf("KUPUNU dolduran");
	}
	else
	{printf("kupunu degil");
	}
	return 0;
}
