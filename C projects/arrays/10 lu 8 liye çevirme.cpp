#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Turkish");

	srand(time(NULL));

	int i,j,x;
	
	int dizi[10]={0};
	
	printf("sayi gir : ");scanf("%d",&x);
	
	for(i=9;0<=i;i--){
		
		dizi[i]=x%8;
		x=x/8;
		
	}
	 for(i=0;i<10;i++){
	 	
	 	printf("%d ",dizi[i]);
	 }
	
	
    return 0;
} 
