#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,x,y,birler,onlar,direnc=1,sayac=0,b=0;
   
    for(i=10;i<100;i++)
	{
     	x=i;
    
	 	while(x>10)
	 	{
    		 birler=x%10;
    		 onlar=x/10;
    		  
    		 x=birler*onlar;
    		 
    		 sayac=sayac+1;
    	 }
     
    	 if(sayac>=direnc)
		 {
    	 	direnc=sayac;
    	 	b=i;
    	 }
     		sayac=0;
    }
    
    
    printf("Carpim direnci en buyuk olan sayi:%d\n",b);
    printf("Carpim direnci:%d",direnc);

    return 0;
}
