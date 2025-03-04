#include<stdio.h>
int main(){
	
	
	int x,y,z,i,j,k,a,b,c;
	float sonuc , pay=1,payda=1,t ;
	
	printf("odada kac kisi var : ");scanf("%d",&x);
	
		i=365;
		a=i;
	
		for(i=365;a-x<i;i--)
		{
				printf("%d\n",i);
				
				pay=pay*i;
				payda=payda*366;
				
		}
				sonuc=pay/payda;
		
			printf("%.0f / %.0f =%.3f \n",pay,payda,sonuc);
			
				t=1-sonuc;
				
			printf("%.3f",t);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
