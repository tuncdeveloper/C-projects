#include <stdio.h>
#include <stdlib.h>

// Zaman yapýsý tanýmlama
struct Zaman {
    int saat;
    int dakika;
    int saniye;
	char sehir[20];
	
};

int main()
{
    // Zaman tipinde deðiþken tanýmlama ve baþlangýç deðeri atama
    struct Zaman t1 = { 12, 47, 36,"van"};
	
	printf("%s sehrinde saat : %d : %d : %d ",t1.sehir,t1.saat,t1.dakika,t1.saniye);
   

    return 0;
}

