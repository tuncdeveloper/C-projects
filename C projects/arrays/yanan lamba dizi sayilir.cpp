#include<stdio.h>
#include<stdlib.h>
int main(){

	int i,j;
	int dizi[10]={1,2,3,4,5,6,7,8,9,10};
	int a[49];
	int b[49];
	int top=0;
	int k,l;
	
	printf("sonuk lambalar\n");
	for(i=1;i<=50;i++){
	
		top=0;
		for(j=0;j<10;j++){
			if(i%dizi[j]==0)
			{	
				top=top+1;	
				k=i;
			}	
		}
		
		if(top%2==0){
			
			a[i-1]=k;
			printf("%d ",a[i-1]);
		}
	}
	
	printf("\n\nyanan lambalar\n");
	for(i=1;i<=50;i++){
		
		top=0;
		for(j=0;j<10;j++){
			if(i%dizi[j]==0)
			{	
				top=top+1;	
				l=i;
			}	
		}
		
		if(top%2!=0){
			b[i-1]=l;
			printf("%d ",b[i-1]);
		}	
	}
	
	return 0;
}
