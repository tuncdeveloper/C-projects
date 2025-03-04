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

	for(j=0;j<a;j++){
		
		k=dizi[x-1];
		for(i=x-1;0<=i;i--){
			
			dizi[i]=dizi[i-1];
		}
		dizi[0]=k;
		
	}	
	
	
		
	
	
	printf("\nyeni dizi\n\n");
	for(i=0;i<x;i++){
		printf("%d ",dizi[i]);
	}
	
	return 0;
	
}
