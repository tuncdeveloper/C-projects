#include<stdio.h>
//3 basmaklý sayi polindrom mu
int main(){
	
	int x, birler,yuzler;
	printf("sayi gir :");
	scanf("%d",&x);
	
	
	birler=x%10;
	yuzler=x/100;
	if(birler==yuzler)
	{
		printf("bu sayi polindromdur");
	}
	else
	{
		printf("bu sayi olindrom degildir");
	}
	return 0;
}
