#include<stdio.h>
int main(){
	
	printf("FÝBONACCÝ\n\n");
	
int a,b,c,x;
int i;

printf("sayi gir : ");
scanf("%d",&x);
 
 a=1;
 b=1;
 
printf("%d\n%d\n",a,b);


for(i=1;i<(x-1);i++){
	
	c=a+b;
	a=b;
	b=c;
	
	printf("%d\n",c);
	
	
}



	
	
	
	
	
	
	
	
	
	
	return 0;
}
