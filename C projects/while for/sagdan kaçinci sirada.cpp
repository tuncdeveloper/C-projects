#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	int x;
	int k;
	
	printf("sayi gir : ");scanf("%d",&x);

int enk=10;	
int	enb=0;
int top=0;
int sayac=0;	

	while(x!=0)
	{
		k=x%10;
		x=x/10;
		
		sayac=sayac+1;
		
		if(enb<k)
		{
			top=sayac;
			enb=k;
		}
		
		if(enk>k)
		{
			enk=k;
		}	
	}
		printf("en buyuk rakam : %d\n",enb);
		printf("en kucuk rakam : %d\n",enk);
		printf("en buyuk rakam sagdan %d. siradadir",top);
	
	
	return 0;
}
