#include <stdio.h>
#include <stdlib.h>

struct zaman {
    int saat, dakika, saniye;
};

int main() {
    struct zaman z1;
    int sn;
  
    printf("Zamaný giriniz (saat.dakika.saniye): ");
    scanf("%d.%d.%d", &z1.saat, &z1.dakika, &z1.saniye);
    printf("Eklenecek saniye degerini giriniz: ");
    scanf("%d", &sn);
  
    printf("\nEski zaman: %02d:%02d:%02d\n\n", z1.saat, z1.dakika, z1.saniye);  

    z1.saat = z1.saat + sn / 3600;
    z1.dakika = z1.dakika + (sn % 3600) / 60;
    z1.saniye = z1.saniye + (sn % 3600) % 60;

    if (z1.saniye >= 60) {
        z1.saniye = z1.saniye % 60;
        z1.dakika = z1.dakika + 1;
    }

    if (z1.dakika >= 60) {
        z1.dakika = z1.dakika % 60;
        z1.saat = z1.saat + 1;
    }

	if(z1.saat>=24){
		
		z1.saat=z1.saat%24;
	}

    printf("Yeni zaman: %02d:%02d:%02d\n", z1.saat, z1.dakika, z1.saniye);
  
    return 0;
}

