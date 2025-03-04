#include<stdio.h>
int main(){
	
	int i,j,x,top=0,k=0;
	int max=0;
	
	printf("sayi gir : ");scanf("%d",&x);
	int dizi[x];

	
	for(i=0;i<x;i++){
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<x;i++){
		
	
		top=0;
		for(j=i+1;j<x;j++){
			
			if(dizi[i]==dizi[j]){
				
				top=top+1;
					
				}
				
			if(k<top){
				k=top;
				max=dizi[i];	
			
			}
		}
	}
	
		printf("en cok tekrar eden : %d\n%d kere tekrar etmis ",max,k+1);
	
	return 0;
	
}
