#include <stdio.h>
 
int main()
{
    int a, b, d, c[36],i;
    i=0;
 	scanf("%d",&a);
 
   while(a=!0){
   	
   	b=a%2;
   	a=a/2;
   	
   	c[i]=b;
   	i++;
   }
 
 	for(i=i-1;i>=0;i--){
 		printf("ceviri : %d",c[i]);
	 }
 
    return 0;
}
