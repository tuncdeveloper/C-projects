#include<stdio.h>
int main(){
	

int i,j,k,l;
       
    for(i=1;i<=5;i++)
    {
        	
         for(j=1;j<=i;j++)
        {
        	printf("*");
   		}
   		
   		for(j=1;j<=10-2*i;j++)
   		{
    		printf(" ");
   		}
   		
   		for(j=1;j<=i;j++)
   		{
   			printf("*");
  		}
  		 
   		printf("\n");
   		
    }     
          
          
          
     for(k=0;k<=4;k+=1)
  {
  		 for(l=4;l>=k;l-=1)
   		 {
    		printf("*");
  		 }
  		 
   		 for(l=1;l<=2*k;l+=1)
   		 {
    		printf(" ");
   		 }
   		 
   		 for(l=4;l>=k;l-=1)
  		 {
    		printf("*");
   		 }
   		
   		printf("\n");
   		
  	}
  	
	return 0;
}
