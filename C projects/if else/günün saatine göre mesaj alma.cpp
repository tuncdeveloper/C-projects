#include<stdio.h>
int main(){
	
	//kullancýnýn girceði saate göre mesajlarý görüntüleyen
	int x ;
	printf("gunun saatine giriniz =");
	scanf("%d",&x);
	
	if(x<6)
	{
		printf("iyi uykular");
	}
	else if(x>=6 && x<11)
	{
		printf("gunaydin");
	}
	else if(x>=11 && x<17)
	{
		printf("iyi gunler");
	}
	else if(x>=17 && x<22)
	{
		printf("iyi aksamlar");
	}
	else if(x>=22 && x<24)
	{
		printf("iyi geceler");
	}
	else 
	{
		printf("tekrar girniz");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
