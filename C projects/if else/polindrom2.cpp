#include<stdio.h>
//4 basamakli polindrom mu
int main(){

int x ,y,o,birler,onlar,yuzler,binler;

printf("sayi gir :");
scanf("%d",&x);

	 birler=x%10;
	 binler=x/1000;
	 
	 y=x/100;
	 yuzler=y%10;
	 
	 o=x/10;
	 onlar=o%10;
     	
	
	if(birler==binler&&onlar==yuzler)
	{
		printf("sayi polinromdur");
	}
	else
	{
		printf("sayi polindrom degildir");
	}
	
	return 0;
}
