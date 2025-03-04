#include<stdio.h>

int main(){
	//abcd..
	
	int hane,n,toplam=0;
	
	printf("sayi gir =");
	scanf("%d",&n);

	
	do{
		
		toplam = toplam + (n%10);
		
		hane++;
		
		
		n=n/10;
			
	}
	while(n>0);
	
		printf("rakamlari toplami = %d\nHane sayisi = %d",toplam,hane);
	
	
	
	
	
	
	
	return 0;
}
