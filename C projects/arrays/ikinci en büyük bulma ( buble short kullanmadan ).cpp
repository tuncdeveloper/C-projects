#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
float fonk(float dizi[],int n){
	
	int i,j;
	 n=6;
	
	float enb=dizi[0];
	float enb2=0;
	  
	  for(i=1;i<6;i++){
	  	
	  	if(dizi[i]>enb){
	  		
	  		enb2=enb;
	  		
		    enb=dizi[i];
		  
		  }
	  	
	  	else if (dizi[i] < enb && dizi[i] > enb2){
	  		
	  		enb2 = dizi[i];
	  		
		  }
	  }
	
	return enb2;

}

int main() {
	
	setlocale(LC_ALL,"Turkish");

  	float a[6]={3.4,12.5,1,5.6,7.8,9.7};
  	
	  
  	printf("dizideki en büyük ikinci sayi : %.2f",fonk(a,6));
  
   return 0;
}

