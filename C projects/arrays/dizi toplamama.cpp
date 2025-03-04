#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int a[2],b[2];
	int i,c[5];
	int x;
	int elde=0;
	
	printf("a dizi\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("b dizi\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
	
	
	for(i=3;i>=0;i--){
		
		x=a[i]+b[i]+elde;
		
		c[i+1]=x%10;
		
		elde=x/10;
	}
	
	c[0]=elde;
	for(i=0;i<4;i++)
		printf("%d ",c[i]);
	
	
	return 0;
}
