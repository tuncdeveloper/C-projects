#include<stdio.h>
int main(){
	
	int i,j,x,top=0,k,a;
	int max=0;
	
	printf("kac sayi girecegine gir : ");scanf("%d",&x);
	int dizi[x];
	printf("dondurme mictarina gir : ");scanf("%d",&a);
	
	for(i=0;i<x;i++){
		scanf("%d",&dizi[i]);
	}

	
	
	for(j=1;j<=a;j++){
		
		k=dizi[0];
		for(i=0;i<x;i++){
		
			dizi[i]=dizi[i+1];
					
		}
		dizi[x-1]=k;
		
	}
	
	printf("\nyeni dizi\n\n");
	for(i=0;i<x;i++){
		printf("%d ",dizi[i]);
	}
	
	return 0;
	
}
