#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void fonk(int x);


int main(){
	
	int a ;
	
	
	printf("sayi gir : ");
	scanf("%d",&a);
	
	fonk(a);
	

	return 0;
}
void fonk(int x){
	
	int sa=x/3600;
	int dk=(x%3600)/60;
	int sn=(x%3600)%60;
	
	if(sa==0 && sn!=0 &&dk!=0)
	{
		printf("%d dakikak %d saniye",dk,sn);
	}
	
	else if(sa!=0 && sn!=0 &&dk==0)
	{
		printf("%d saat %d saniye",sa,sn);
	}
	
	else if(sa!=0 && sn==0 &&dk!=0)
	{
		printf("%d saat %d dakika",sa,dk);
	}
	
	else if(sa==0 && sn==0 &&dk!=0)
	{
		printf("%d dakikak ",dk);
	}
	
	else if(sa!=0 && sn==0 &&dk==0)
	{
		printf("%d saat",sa);
	}
	
	else if(sa==0 && sn!=0 &&dk==0)
	{
		printf("%d saniye",sn);
	}
	
	else if(sa!=0 && dk!=0 && sn!=0)
	{
		printf("%d saat %d dakika %d saniye",sa,dk,sn);
	}
}

