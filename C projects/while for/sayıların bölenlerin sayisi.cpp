#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int sayac=0,i,j;
		
		for(i=1;i<=10;i++)
		{
			
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					sayac=sayac+1;
				}		
							
			}
							
			printf("%d in bolenlerin sayisi : %d\n",i,sayac);	
					sayac=0;
			
		}
		
	return 0;
}
