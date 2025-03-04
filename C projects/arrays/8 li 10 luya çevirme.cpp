#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	
	int i,j=3,c,toplam=0;
	
	int a[4],b[4];
	
	printf("8 lik sayinin rakamlarina giriniz : \n\n");
	for(i=0;i<4;i++){
		
		printf("%d. sayiya giriniz : ",i+1);scanf("%d",&a[i]);

	}
	
	for(i=0;i<4;i++){
		
		c=pow(8,i)*a[j];
		
		toplam=toplam+c;
		j=j-1;
	}
		printf("\n\n%d",toplam);
		
		
	return 0;

}
