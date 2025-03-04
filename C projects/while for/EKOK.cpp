#include<stdio.h>
int main(){
	
	
	int c,x,y,k,m,n;
	
	
	printf("ilk sayi gir : ");scanf("%d",&x);
	printf("ikinci sayi gir : ");scanf("%d",&y);
	
	
	
	k=x%y;
	m=x;
	n=y;
	
	while(k!=0)
	{
		x=y;
		y=k;
		k=x%y;
		c=y;
	}
	
		m=m/c;
		n=n/c;
	
		printf("%d/%d ve EBOBU : %d EKOKU : %d",m,n,c,m*n*c);
	
	
	
	
	
	
	
	
	return 0;
}
