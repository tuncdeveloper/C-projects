#include <stdio.h>
#include <stdlib.h>

// Zaman yap�s� tan�mlama
struct Zaman {
    int saat;
    int dakika;
    int saniye;
	char sehir[20];
	
};

int main()
{
    // Zaman tipinde de�i�ken tan�mlama ve ba�lang�� de�eri atama
    struct Zaman t1 = { 12, 47, 36,"van"};
	
	printf("%s sehrinde saat : %d : %d : %d ",t1.sehir,t1.saat,t1.dakika,t1.saniye);
   

    return 0;
}

