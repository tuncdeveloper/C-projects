#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
		
	int i,enb,enk,x;
	printf("kac sayý olduguna gir :");scanf("%d",&x);
	int dizi[x];
		

		
			
	for(i=0;i<=x;i++){
		
		scanf("%d",&dizi[i]);
		
		enb=enk=dizi[0];
		
	}
	
	for(i=0;i<=x;i++){

		if(enb<dizi[i]){
			
			enb=dizi[i];
			
		}
		
		if(enk>dizi[i]){
			
			enk=dizi[i];
		}
		
	}
		printf("en buyuk sayi : %d\n",enb);
		printf("en kucuk sayi : %d",enk);
	
	return 0;
}
