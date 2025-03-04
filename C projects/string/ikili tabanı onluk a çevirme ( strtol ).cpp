#include <stdio.h>
#include <stdlib.h>

int main() {
    char binary_str[100] ; // Dönüþtürülecek binary dizgi
   
    char *endptr; // strtol fonksiyonunun dönüþ deðeri sonrasýndaki karakterlerin adresi
	printf("Binary sayiya girniz : ");
	fgets(binary_str,100,stdin);
    
	long int decimal_num = strtol(binary_str, &endptr, 2); // Binary dizgiyi onluk tabana dönüþtür

   
    printf("Binary: %s\n", binary_str);
   
    printf("Decimal: %ld\n", decimal_num);

    return 0;
}

