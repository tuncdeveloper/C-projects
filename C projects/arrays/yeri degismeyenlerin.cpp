#include<stdio.h>
#include<stdlib.h>
int main(){
	int i , j , k,x,top=0;

	printf("\n\nsayi gir : ");scanf("%d",&x);
	int dizi[x],a[x];
	
	for(i=0;i<x;i++){
		
		scanf("%d",&dizi[i]);
		a[i]=dizi[i];
	}
	
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if(dizi[i]<dizi[j])
			{
				k=dizi[i]; 			
				dizi[i]=dizi[j];	
				dizi[j]=k;	
			}
		}	
	}
	printf("\n\nbuyukten kucuge siralamasi : \n");
	for(i=0;i<x;i++)
	{
		printf("%d ",dizi[i]);
	}
	
	for(i=0;i<x;i++)
	{
		if(a[i]!=dizi[i])
		{
			top+=1;
			
		}
		
	}
		printf("\nyeri degisenlerin sayisi : %d",top);
	
	return 0;
}
