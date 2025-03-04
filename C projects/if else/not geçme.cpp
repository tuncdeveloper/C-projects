#include<stdio.h>
int main(){


int x,y,z;
float a;
printf("Vize notu :");
scanf("%d",&x);
printf("final notu :");
scanf("%d",&y);
printf("devam notu :");
scanf("%d",&z);	
	
	a= (x*4/10+y*1/2+z*1/10);
	
	if(a>=60)
	{	
		printf("siralamaniz:%f",a);
	}
	
	
	else
	{
		printf("sinavi gecemediniz");
	}
	
	return 0;
}
