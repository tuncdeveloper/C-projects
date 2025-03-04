#include<stdio.h>
#include<stdlib.h>

int main() {
 
  int i,j;
 int dizi[100];		
int top=0;	  
int	k=0;
  
  	for(i=10;i<100;i++){
  			top=0;
		  for(j=1;j<=i;j++){
  			
  			if(i%j==0){
  			
				  top++;	
			  }		
			}
	  
	  		if(top==2){
  		
  				dizi[k]=i;
  				printf("%d ",i);	
  				k++;
	  	}
	}
	int sabt=k;
  
  
  for(i=0;i<sabt;i++){
  	
  	if((dizi[sabt-i]-dizi[sabt-i-1])==2){
  		
  		
  		printf("\n\n%d ve %d",dizi[sabt-i-1],dizi[sabt-i]);
  		break;
	  }
  	
  }	
  	
  
  
  
  
  
  
  
  return 0;
}

