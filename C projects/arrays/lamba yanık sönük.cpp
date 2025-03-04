#include<stdio.h> 
#include<stdlib.h>


int main(){

    int lamp[50];
    
    for(int i=0;i<50;i++){

        lamp[i]=0;

    }

    for(int j=1;j<=10;j++){

    	for(int i=0;i<50;i++){
	 
    		if((i+1)%j==0){
       	
        	if(lamp[i]==0)
          	lamp[i]=1;
        	else
        	 lamp[i]=0;
       		}
	 	}  
    }
    
    printf("\nsonuk lambalar\n");
     for(int i=0;i<50;i++){

         if(lamp[i]==0)
         printf("%d ",i+1);

    }
    
    printf("\n\nyanan lambalar\n");
    for(int i=0;i<50;i++){

         if(lamp[i]==1)
         printf("%d ",i+1);

    }

    return 0;
}
