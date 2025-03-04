#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<locale.h>

int main() {
 	setlocale(LC_ALL,"Turkish");
 	srand(time(NULL));
 	
 	int x,y;
 	int i,j;
 	int temp;
 	int konumx[8];
 	int konumy[8];
 	
 	char dizi[8][8];
 	
 	
 	for(i=0;i<8;i++){
 		
 		for(j=0;j<8;j++){
 			
 			dizi[i][j]='-';	
	
	  }
	 }
	 
	 for(i=0;i<8;i++){
  		
  		konumx[i]=i;
  		konumy[i]=i;
	  }
  
  
  	for(i=0;i<8;i++){
  	
  			
  			x=rand()%8;
  			y=rand()%8;
  			
  			temp=konumx[i];
  			konumx[i]=konumx[x];
  			konumx[x]=temp;
  			
  			temp=konumy[i];
  			konumy[i]=konumy[y];
  			konumy[y]=temp;
  			
  			
		  }
	  
	 
	 
	 
 	for(i=0;i<8;i++){
 			
		dizi[konumx[i]][konumy[i]]='k';	
	 }
 	
 	
 	for(i=0;i<8;i++){
 	
		for(j=0;j<8;j++){
					
 			printf("%c ",dizi[i][j]);
		
		 } 	
   		printf("\n");
   }
	
    return 0;
}

