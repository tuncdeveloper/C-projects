#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void fonk(int x,int y,int a,int b){
	
	srand(time(NULL));
	
	int z,c;
	
	if(x>y)
	{	
		z=y+rand()%(x-y+1);
	}
	
	else if(y>x)
	{	
		z=x+rand()%(y-x+1);
	}
	
	if(a>b)
	{
		c=b+rand()%(a-b+1);
	}
	else if(a<b)
	{
		c=a+rand()%(b-a+1);
	}
	
	printf("(%d,%d)",z,c);
	
}

int main(){
	
	int k,l,m,n;
	scanf("%d",&k);scanf("%d",&l);
	printf("----------\n");
	scanf("%d",&m);scanf("%d",&n);
	
	fonk(k,l,m,n);
	
	return 0;
}
