#include<stdio.h>
int main(){
	
	// 20 e kadar �ift say�lar olacak ama 14 say�s� olmayacak 
   
   int i=1 ;
    
    while (i<=20){
	
   	if(i%2==0 && i!=14){
	
   	printf("%d\n",i);   		
	   }
	   
   	i++;
   	
   }
	
	
	
	return 0;
}
