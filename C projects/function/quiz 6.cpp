#include<stdio.h>
#include<stdlib.h>
int main()
{
   int sayi=0,a=0,birler=0,onlar=0,direnc=1,sayac=0,b=0;
   
   
    for(sayi=10;sayi<100;sayi++)
	{
     a=sayi;
     
    	 while(a>10)
		 {
    	 	birler=(a%10);
    	 	onlar=(a/10);
    	 	
    	 	a=(birler*onlar);
    	 	sayac=sayac+1;
    	 }
    	 
    	if(sayac>=direnc){
     	direnc=sayac;
   	 	b=sayi;
     }
     
 		sayac=0;
    }
    
    
    printf("Carpim direnci en buyuk olan sayi:%d\n",b);
    printf("Carpim direnci:%d",direnc);

    return 0;
}
	
	
	
	
	
