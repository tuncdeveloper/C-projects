#include<stdio.h>
int main(){
	
	int c,i,j,k,x,y,z;
	float b,a,n;
	printf("ilk karenin kenar uzunluðuna gir : ");scanf("%f",&a);
	
	printf("kac kare olduguna gir : ");scanf("%f",&n);
	
	

	
	for(i=1;i<=n;i++)
	{
		b=a*a;
		printf("%d. kenar degeri %.2f alaný %.2f \n",i,a,b);
		
		a=a/2;
		
		b=a*a;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
