#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	srand(time(NULL));
	
	int x,y,z;
	int a,b,c;
	
	printf("gun ay yil degerlerine giriniz : \n");scanf("%d%d%d",&x,&y,&z);
	
	
	a=x+rand()%30;
	b=y+rand()%12;
	c=z+rand()%10;
	
	if(y==b && z==c)
	{
		a=(x+1)+rand()%(30-x);
		printf("\n%d/%d/%d",a,b,c);
	}
	
	else if(x==a && z==c)
	{
		b=(y+1)+rand()%(12-y);
		printf("\n%d/%d/%d",a,b,c);
	}
	
	else if(y==b && x==a)
	{
		c=(z+1)+rand()%(10);
		printf("\n%d/%d/%d",a,b,c);
	}
	
	else if(y==b)
	{
		c=(z+1)+rand()%(10);
		a=(x+1)+rand()%(30-x);
		printf("\n%d/%d/%d",a,b,c);
	}
	
	else if(x==a)
	{
		c=(z+1)+rand()%(10);
		b=(y+1)+rand()%(12-y);
		printf("\n%d/%d/%d",a,b,c);
	}
	
	else if(z==c)
	{
		a=(x+1)+rand()%(30-x);
		b=(y+1)+rand()%(12-y);
		printf("\n%d/%d/%d",a,b,c);
	}
	
	else
	{
		a=(x+1)+rand()%(30-x);
		b=(y+1)+rand()%(12-y);
		c=(z+1)+rand()%(10);
		printf("\n%d/%d/%d",a,b,c);
		
	}
	
	return 0;
}
