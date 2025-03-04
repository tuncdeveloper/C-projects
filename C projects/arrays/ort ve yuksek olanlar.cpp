#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("girilen 5 nottan ortalama usut olanlarý yazan algoritma \n\n");
	
	int dizi[5];
	int i;
	float toplam=0 , ort;
	
	printf("5 not gir : \n\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&dizi[i]);
		
		toplam=toplam+dizi[i];
	}
		ort=toplam/5;
		printf("ortlamasi : %.2f\n\n",ort);
	
	printf("ortalamadan yuksek olanlar : \n\n");
	for(i=0;i<5;i++)
	{
		if(dizi[i]>ort)
		printf("%d ",dizi[i]);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
