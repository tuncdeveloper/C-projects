#include <stdio.h>
#include <stdlib.h>

int main() {
    char binary_str[100] ; // D�n��t�r�lecek binary dizgi
   
    char *endptr; // strtol fonksiyonunun d�n�� de�eri sonras�ndaki karakterlerin adresi
	printf("Binary sayiya girniz : ");
	fgets(binary_str,100,stdin);
    
	long int decimal_num = strtol(binary_str, &endptr, 2); // Binary dizgiyi onluk tabana d�n��t�r

   
    printf("Binary: %s\n", binary_str);
   
    printf("Decimal: %ld\n", decimal_num);

    return 0;
}

