#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int sayac=0,i,j,a=0;
		
		for(i=1;i<=1000;i++)
		{
			a=0;
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				{
					a=a+j;
				}		
						
			}
			
			if(i==a)
			{				
				printf("%d\n",i);		
			}		
		
		}
		
	return 0;
}
