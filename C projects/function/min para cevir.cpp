#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int fonk(int x);

int main(){
	
	int a;
	
	printf("sayi gir : ");scanf("%d",&a);
	
	fonk(a);

	return 0;
}


int fonk(int x){
	
	
	
	int ikiyuz = x/200;
    int yuz = (x%200)/100;
    int elli = (x%100)/50;
    int yirmi = (x%50)/20;
    int on = (x%20)/10;
    int bes = (x%10)/5;
    int bir = x%5;
	
	
	printf("200 luk %d\n",ikiyuz);
	printf("100 luk %d\n",yuz);
	printf("50 luk %d\n",elli);
	printf("20 luk %d\n",yirmi);
	printf("10 luk %d\n",on);
	printf("5 luk %d\n",bes);
	printf("1 luk %d\n",bir);
	
	
	
	
	return x;
}




