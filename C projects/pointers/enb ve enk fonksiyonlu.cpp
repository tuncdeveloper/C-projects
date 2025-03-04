#include<stdio.h>
#include<stdlib.h>
void fonk(int *enb , int *enk , int n , int dizi[]){
	
	int i;
	
	
		*enb=dizi[0];
		*enk=dizi[0];
		
		for( i=1;i<n;i++){
	
			if(dizi[i]>*enb){
				
				*enb=dizi[i];
				
			}
				
			if(dizi[i]<*enk){
				
				*enk=dizi[i];
			}	
		
		}
	
	printf("\n\nen buyuk sayi : %d\n\n",*enb);
	printf("en kucuk sayi : %d",*enk);
}


int main(){
	
	int n,i;
	int enb , enk ;
	
	printf("diziinni boyutuna gririniz : ");scanf("%d",&n);
	printf("\n\n");
	int dizi[n];
	for(i=0;i<n;i++){
		
		printf("dizinin %d. elemainna giriniz : ",i+1);scanf("%d",&dizi[i]);
	}
	
	fonk(&enb,&enk,n,dizi);
	
	return 0;
}
