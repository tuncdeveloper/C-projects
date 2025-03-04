#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int fact(int x){
	
	int sonuc;
	
	if(x<=0)
		return 1;
	else
	sonuc=fact(x-1)*x;
	
	return	sonuc;
}


int main(){
	
	
	int a ;
	
	printf("sayi gir : ");scanf("%d",&a);
	
	printf("\n\nfactoriyeli : %d",fact(a));
	
	
	
	
	return 0;
}
