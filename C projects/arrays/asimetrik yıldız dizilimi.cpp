#include<stdio.h>
#include<stdlib.h>

int main() {
  int i,j;
  
  int dizi[5]={3,5,7,4,9};
  
  for(i=0;i<5;i++){
  	
  	printf("\n%d sayisi yildiz dizilimi : ",dizi[i]);
  	for(j=0;j<dizi[i];j++){
  		
  		
  		printf(" * ");
	  }
  	printf("\n\n");
  }
  
  
  return 0;
}

