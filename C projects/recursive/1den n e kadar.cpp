#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int fonk(int n)
{
   if(n==0)
   		return 0;
  
   fonk(n-1); 
    printf("%d ",n);
   
   
   return n ;
}

int main()
{
	printf("1 den n e kadar sayi yazdirma\n\n");
	
	int x ;
	printf("sayi gir : ");scanf("%d",&x);
   
   	fonk(x);
    
    return 0;
}
