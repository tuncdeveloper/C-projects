#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int fonk(float dizi[4]){
	
	int i,j,a,enb,k;
	float toplam=0 , ort,sayac=0 ;

	
	printf("a dizisinin elemanlari : \n");
	for(i=0;i<=4;i++){	
		toplam=toplam+dizi[i];
	}
	
	ort=toplam/5;
	printf("ortlama : %.2f\n\n",ort);
	for(i=0;i<=4;i++){
		a=pow(ort-dizi[i],2);
		sayac=sayac+a;
	}
		sayac=sqrt(sayac/4);


	printf("standart sapmasi : %.2f",sayac);
	
	enb=fabs(sayac-dizi[0]);
	
	for(i=0;i<=4;i++){
		
		if(enb<fabs(sayac-dizi[i])){
			
			enb=dizi[i];
			k=i+1;
		}
	}
	
	printf("\n\n%d. sirada ve en cok sapan sayi : %d",k,enb);
	
	return 0;
}
int main(){
	int i;
	float dizi[i];
	for ( i = 0; i < 4; i++) {
        printf("%d. gunun degerini giriniz:",i+1);
        scanf("%f",&dizi[i]);
    }
	
	
	
	fonk(dizi);
	
	
	
	
	
	return 0;
}
