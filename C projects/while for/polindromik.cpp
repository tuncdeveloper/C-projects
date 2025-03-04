#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int x,y=0,a,b;
	
	printf("sayi gir : ");scanf("%d",&x);
	
	a=x;
	
	while (x!=0 )
	{
		b=x%10;											//		x		a		b		y		x						
														//		454		454		4		4		45
		y=y*10+b;										//		45		454		5		45		4
														//		4		454		4		454		0		
		x=x/10;											//										
														//											
	}													//									
														//										
	if(a==y)											//											
		printf("\npolondromiktir");	
	
	else
		printf("\npolondromik degildir");
	
	
	
	return 0;
}
