#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	
	srand(time(NULL));
	
	int i,d,j=3,c,top=0,k=0;
	
	int sayi1,sayi2;
	
	printf("1. dizinin kac eleman olduguna gir : ");scanf("%d",&sayi1);
	printf("2. dizinin kac eleman olduguna gir : ");scanf("%d",&sayi2);
	
	int a[sayi1],b[sayi2];
	
	printf("\n1. dizi : ");
	for(i=0;i<sayi1;i++){
		
		c=rand()%10;
		a[i]=c;
		printf("%d ",a[i]);
	}	
	
	printf("\n2. dizi : ");
	for(i=0;i<sayi2;i++){
		
		c=rand()%10;
		b[i]=c;
		printf("%d ",b[i]);
	}		
		
		for(i=0;i<sayi1;i++){
			
			top=0;
			for(j=0;j<sayi2;j++){
				
				if(a[i]==b[j]){
					
					top=top+1;
					
					if(top==1){
						k=k+1;
						
					}
					
				}
			}
		}
		
		printf("\n\nortak dizi elemani : %d",k);
	return 0;
}

