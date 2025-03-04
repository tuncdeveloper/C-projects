#include<stdio.h>
#include<stdlib.h>	
#include<time.h>
#include<math.h>

int fonk(char x){
	
	int k,l,m ;
	
	srand(time(NULL));
	
	if(x=='s')
	{
		k=11+rand()%5;
		l=rand()%60;
		m=rand()%60;
		
		printf("%d:%d:%d",k,l,m);	
	}
	
	else if(x=='o')
	{
		k=11+rand()%5;
		l=rand()%60;
		m=rand()%60;
		printf("%d:%d:%d",k,l,m);	
	}
	else if(x=='a')
	{
		k=16+rand()%7;
		l=rand()%60;
		m=rand()%60;
		printf("%d:%d:%d",k,l,m);		
	}
	
	return 0;	
}

int main(){
	
	char z;
	
	printf("ogun secin : ");scanf("%s",&z);
	
	fonk(z);
	
	return 0;
}
