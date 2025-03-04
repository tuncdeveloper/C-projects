#include<stdio.h>
int main(){
	
	int x,y,z;
	
	printf("3 tane sayiya giriniz = \n");

	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y && x>z)
	{
		if(y>z)
			{
				printf("%d>%d>%d",x,y,z);
			}
		else{
				printf("%d>%d>%d",x,z,y);
			}	
	}
	
	
	else if(y>x && y>z)
	{
		if(x>z)
			{
				printf("%d>%d>%d",y,x,z);
			}
		else{
				printf("%d>%d>%d",y,z,x);
			}	
	}
	
	
	else if(z>x&&z>y)
	{
		if(y>x)
			{
				printf("%d>%d>%d",z,y,x);
			}
		else{
				printf("%d>%d>%d",z,x,y);
			}	
	}
	
	
	else if(x==y && x!=z)
	{
		if(y>z)
			{
				printf("%d=%d>%d",x,y,z);
			}
		else 
			{
				printf("%d>%d=%d",z,x,y);
			}
	}
	
	
	else if(x==z && x!=y)
	{
		if(x>y)
			{
				printf("%d=%d>%d",z,x,y);
			}
			
		else
			{
				printf("%d=%d<%d",z,x,y);
			}	
	}
	
	
	else if(y==z && y!=x)
	{
		if(z>x)
			{
				printf("%d=%d>%d",z,y,x);
			}
		else 
			{
				printf("%d=%d<%d",z,y,x);
			}	
		
	}
	
	else if(x==y && x==z)
	{
		printf("%d=%d=%d",x,y,z);
	}
	
	return 0;
}
