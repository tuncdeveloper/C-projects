#include<stdio.h>
int main(){
	
	
	int x,i=0,a=0;
	float ort;
	
	printf("sayi gir = ");scanf("%d",&x);
	
	while(x%2==0)
	{
		printf("sayi gir = ");scanf("%d",&x);
		a=a+x;
		i=i+1;	
		
	}	
		ort=a/i;
																		
		printf("toplam = %d\n",a);
		printf("adet = %d\n",i);
		printf("ortalama = %.2f",ort);
		
	 	
	return 0;
}
