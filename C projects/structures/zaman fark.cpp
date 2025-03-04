#include <stdio.h>
#include <stdlib.h>
#include <math.h>	
struct zaman {
    int saat, dakika, saniye;
};

struct zaman farkbul(struct zaman z1, struct zaman z2){
   
    struct zaman fark;
    int sa,da,se;
    
	int top1=z1.saat*3600+z1.dakika*60+z1.saniye;
	int top2=z2.saat*3600+z2.dakika*60+z2.saniye;
	
	int top=abs(top1-top2);
	
	sa=top/3600;
	da=(top%3600)/60;
	se=(top%3600)%60;
	
    fark.saat = sa;
    fark.dakika = da;
    fark.saniye = se;
    
    return fark;
}

int main() {
    struct zaman z1, z2, fark;
    
    printf("Birinci zamanı giriniz (saat dakika saniye): ");
    scanf("%d %d %d", &z1.saat, &z1.dakika, &z1.saniye);
   
    printf("İkinci zamanı giriniz (saat dakika saniye): ");
    scanf("%d %d %d", &z2.saat, &z2.dakika, &z2.saniye);
    
    fark = farkbul(z1, z2);
    
    printf("\nİkisi arasındaki fark: %02d saat %02d dakika %02d saniye.\n", fark.saat, fark.dakika, fark.saniye);
    
    return 0;

}

