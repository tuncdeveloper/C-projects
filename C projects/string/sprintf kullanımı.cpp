#include <stdio.h>

int main() {
   int num = 42;
   float pi = 3.14159;
   char str[100];

   sprintf(str, "Sayi: %d, Pi: %.2f", num, pi);

   printf("%s\n", str);

   return 0;
}

