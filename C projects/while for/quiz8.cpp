#include<stdio.h>
#include<math.h>
int main(){
	
	int x,n,i,fact1=1,a,c,d;
	int j,b=1;
	float fact,sonuc,toplam;
	printf("x degerine giriniz : ");scanf("%d",&x);
	printf("n degerine giriniz : ");scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		a=pow(x,i);
		
		printf("\n%d =>> %d\n",i,a);
		
		
		
		fact1=1;
		for(j=1;j<=2*i-1;j++)
		{
			fact1=fact1*j;
			fact=fact1;
		}
			printf("\n%d ! = %.0f\n",2*i-1,fact);	
			
			
		sonuc=a/fact;	
		
		
		printf("\n%d/%.0f == %f",a,fact,sonuc);
		
		
		toplam=toplam+sonuc;
		
	}
	
		printf("\n\n\ntoplam = %f",toplam);

	
	
	
	
	return 0;
	
}
