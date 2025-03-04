#include<stdio.h>
int main(){
	//4 basamaklý bir sayinin (ab*cd=ba=bd*dc) tersyüz oldðunu bulma :
	int x,y,z,birler,onlar,yuzler,binler;
	printf("Bir sayi giriniz : ");
	scanf("%d",&x);
	
	birler=x%10;
	binler=x/1000;
	
	y=x/10;
	onlar=y%10;
	
	z=x/100;
	yuzler=z%10;
	
	
	if(((binler*10+yuzler)*(onlar*10+birler))==((yuzler*10+binler)*(birler*10+onlar)))
	{
		printf("Sayi TERSYUZDUR");
	}
    else
	{
		printf("Sayi tersyuz degil");
	}
	
	
	
	
	
	return 0;
}
