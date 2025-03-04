#include <stdio.h>
#include <stdlib.h> // atio, atof, atol gibi fonksiyonlar stdlib'dedir
int main() {
	
	char s[50];
	int x;
	long y;
	double z;
	
	// kucuk sayilarla ve 15-20 basamakli sayilarla test edin
	// sonra kesirli sayilarla test edin
	
	
	printf("sayi girin: ");
	gets(s);
	
	
	x = atoi(s); // stringin icerigini integer’a cevirir
	y = atol(s); // stringin icerigini long’a cevirir
	z = atof(s); // stringin icerigini double’a cevirir
	
	
	printf("int: %d\n", x);
	printf("long: %ld\n", y);
	printf("double: %lf\n", z);
	
	return 0;
}
