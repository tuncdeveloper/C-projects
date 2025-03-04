#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int cevir(float,float,float,float);



int main(){
	
	float x,y,z,t;
	
	printf("1 TL kg olarak : ");scanf("%f",&x);
	printf("0.50 TL kg olarak : ");scanf("%f",&y);
	printf("0.25 TL kg olarak : ");scanf("%f",&z);
	printf("0.10 TL kg olarak : ");scanf("%f",&t);

	cevir(x,y,z,t);
	
	return 0;
}



int cevir(float k,float l,float m,float n)
{
	
	float a,b,c,d,h;
	
	a=k*1000/8.2;
	b=l*1000/6.8;
	c=m*1000/4;
	d=n*1000/3.15;
	
	
	a=a*1;
	b=b*0.5;
	c=c*0.25;
	d=d*0.10;
	
	h=a+b+c+d;
	
	printf("\ntoplam para : %f",h);
		
	
	return k;	
}
	
