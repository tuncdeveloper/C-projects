#include <stdio.h>
#include <stdlib.h>
struct Zaman {
	int saat;
	int dakika;
	int saniye;
};
int main() {
	
	struct Zaman z1 , z2 ,fark ;
	// yapinin elemanlarina deger atama islemi
	z1.saat = 6;
	z1.dakika = 49;
	z1.saniye = 52;
	
	z2.saat = 7;
	z2.dakika = 28;
	z2.saniye = 45;
	// degerlerin kullanimi
	printf("baslangic zamani : %d %d %d\n", z1.saat, z1.dakika, z1.saniye);
	printf("bitis zamani : %d %d %d\n", z2.saat, z2.dakika, z2.saniye);
	
	fark.saniye=z2.saniye-z1.saniye;
	fark.dakika=z2.dakika-z1.dakika;
	fark.saat=z2.saat-z1.saat;
	
	if(fark.saniye<0){
		
		fark.saniye=fark.saniye+60;
		fark.dakika--;
	}
	
	if(fark.dakika<0){
		
		fark.dakika=fark.dakika+60;
		fark.saat--;
	}
	
	printf("\ngecen sure : %d %d %d\n",fark.saat,fark.dakika,fark.saniye);
	
	
	return 0;
}
