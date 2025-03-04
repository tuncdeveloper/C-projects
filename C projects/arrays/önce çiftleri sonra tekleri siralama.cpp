#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int k,i,j;
	int a[10]={9,8,7,5,3,6,2,1,4,0};
	
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				k=a[i]; 			
				a[i]=a[j];	
				a[j]=k;			
			}
		}	
	}
	
		for(i=0;i<10;i++)
		{
			if(a[i]%2==0)
				printf("%d ",a[i]);
		}
	
	
		for(i=0;i<10;i++)
		{
			if(a[i]%2!=0)
				printf("%d ",a[i]);
		}
	
	
	
	

	return 0;
}
