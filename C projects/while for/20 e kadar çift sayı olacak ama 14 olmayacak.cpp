#include<stdio.h>
int main(){
	
	// 20 e kadar çift sayýlar olacak ama 14 sayýsý olmayacak 
   
   int i=1 ;
    
    while (i<=20){
	
   	if(i%2==0 && i!=14){
	
   	printf("%d\n",i);   		
	   }
	   
   	i++;
   	
   }
	
	
	
	return 0;
}
