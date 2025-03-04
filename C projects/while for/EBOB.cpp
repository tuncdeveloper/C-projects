#include<stdio.h>
int main(){
	
	int a,b,k ;
	
	
	printf("ilk sayi gir : ");scanf("%d",&a);
	printf("ikinci sayi gir :");scanf("%d",&b);				
	
	k=a%b;
	
	while(k!=0)
	{
		a=b;
		b=k;
		k=a%b;	
	}
		printf("EBOBU : %d",b);
	

	
	
//		a	b	k	
//		18	24	18
//		24	18	6
//		18	6	0
//	
//		
//
//
//

	
	return 0;
}
