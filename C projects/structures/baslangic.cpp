#include <stdio.h>
#include <stdlib.h>

// Zaman yap�s� tan�mlama
struct Zaman {
    int saat;
    int dakika;
    int saniye;
};

int main()
{
    // Zaman tipinde de�i�ken tan�mlama ve ba�lang�� de�eri atama
    struct Zaman z1 = { 14, 43, 3 } ,z2 = { 15,15,27 };

    // De�erlerin kullan�m� ve ekrana yazd�r�lmas�
    printf("Saat: %02d\n", z1.saat);
    printf("Dakika: %02d\n", z1.dakika);
    printf("Saniye: %02d\n\n", z1.saniye);

	
	
	printf("z2.saat : %d\n", z2.saat);
	printf("z2.dakika : %d\n", z2.dakika);
	printf("z2.saniye : %d\n", z2.saniye);
	printf("\n");


    return 0;
}

