#include<stdio.h>

int main(){
	
	int x ,y,z,a ;
	printf(" 2 sayiya giriniz\n");
	scanf("%d%d",&x,&y);

	printf("1-toplama islemi \n");
	printf("2-cikarma islemi \n");
	printf("3-carpma islemi  \n");
	printf("4-bolme islemi   \n\n");
	printf("bir islem seciniz ");
		scanf("%d",&z);
	
	if(z==1)
	{
		printf("%d",x+y);
	}
	else if(z==2)
	{
		printf("%d",x-y);
	}
	else if(z==3)
	{
		printf("%d",x*y);
	}
	else if(z==4)
	{
		printf("%d",x/y);
	}
	else
	{
		printf("hatali giris");
	}
	return 0;
}
