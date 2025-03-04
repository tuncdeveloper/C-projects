#include <stdio.h>
 
int main()
{
	printf("ilk 10 eleman fibonacci\n\n");
	
    int a,c, b, d,i;
    
    int dizi[10];
    
    dizi[0]=1;
    dizi[1]=1;
  
    for(i=2;i<12;i++){
    	
    	dizi[i]=dizi[i-1]+dizi[i-2];
	}

 	for(i=0;i<=9;i++)
 		printf("%d ",dizi[i]);
 	
    return 0;
}
