#include <stdio.h>
#include <stdlib.h>

// Zaman yap�s� tan�mlama
struct zaman {
    int saat;
    int dakika;
    int saniye;
	char sehir[20];
	
};

void fonk(struct zaman gece){
	
	
	printf("%s sehrinde saat : %d : %d : %d ",gece.sehir,gece.saat,gece.dakika,gece.saniye);
	
}
int main()
{
    // Zaman tipinde de�i�ken tan�mlama ve ba�lang�� de�eri atama
    struct zaman t1 = { 12, 47, 36,"van"};
	

	fonk(t1);

	printf("\n\n%s sehrinde saat : %d : %d : %d ",t1.sehir,t1.saat,t1.dakika,t1.saniye);
   
	

    return 0;
}

