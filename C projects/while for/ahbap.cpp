#include<stdio.h>
int main(){
	
	
	int x,i,j ;
	int ahbap;
	float ahbap1;
	float ahbap2;
	float sayac=0,sayac1=0;
	printf("sayi gir = "); scanf("%d",&x);
	
	
	for(i=1;i<=x;i++)
	{
		
		if(x%i==0)			// girdiðim sayinin bölenlerin toplamýný veriyor .
		{
			sayac=sayac+i;
		}
	}
	
	ahbap1=sayac/x;
	
	for(i=1;i<x;i++)
	{
		sayac1=0;
		for(j=1;j<=i;j++)		
		{
			if(i%j==0)
			{
				sayac1=sayac1+j;
				ahbap2=sayac1/i;
			}
		}
		
		if(ahbap1==ahbap2)
		{
			ahbap=i;
		}
		
		printf("%d sayisinin bolnelerin toplaminin kendisine orani : %.2f\n",i,ahbap2);
		
	}
		printf("\ngirdigim sayinin bolenlerinin toplaminin kendisine orani %.2f\n",ahbap1);
		
		printf("ahbap sayi : %d",ahbap);
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
