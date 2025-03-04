#include<stdio.h>
#include<math.h>
int fonk(int y){
	
	int i,k,x,a;
	int top=0,b;
	int enb=1;
	
	x=y-1;
	a=pow(10,x);
	
	for(i=a;i<10*a;i++)
	{
		top=0;
		b=i;
		while(b!=0)
		{
			k=b%10;
			b=b/10;
			
			top=k+top;	
			
		}
		
		if(i==pow(top,3))
		{
			if(enb<i)
			{
				enb=i;
				return enb;
			}
	
		}
		
	}
		
		
	return 0;
	
}
int main(){
	
	int m;
	printf("basamak sayisina gir : ");scanf("%d",&m);
	
	
	printf("%d",fonk(m));
	
	
	return 0;
}
