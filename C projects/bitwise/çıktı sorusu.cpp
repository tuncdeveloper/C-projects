#include <stdio.h>

void bu_nedir(unsigned);

int main() {
    
	unsigned a = 1053;
     bu_nedir(a);
    
	return 0;

}

void bu_nedir(unsigned sayi) {
  
    unsigned a = sayi & 255;
    unsigned b = sayi >> 8;
  	unsigned m;
    
    printf("\na icin : %d\n",a);
	printf("\nb icin : %d\n",b);

}

