#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int f(int a,int b,int c){
	
	
	
	
	if(a<b+c && a>fabs(b-c) && b<a+c && b>fabs(a-c) && c<a+b && c>fabs(a-b))
	{
		printf("ucgendir");
		return 1 ;
		
	}
	else
	{
		printf("degildir");
	}
	
	return 0;
}
int main(){
	
	int x,y,z;
	printf("");scanf("%d%d%d",&x,&y,&z);
	
	
	
	
	printf("% d ",f(x,y,z));
	
	
	return 0;
}
