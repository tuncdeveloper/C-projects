#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL,"Turkish");
	
   int a[3][3]={1,2,3,4,5,6,7,8,9};
   int i, j, row_sum, col_sum;

   // Matris elemanlar�n� al
   printf("3x3'l�k matrisin elemanlar� ve sat�r , s�tun toplam�:\n");
   for (i = 0; i < 3; i++) {
   	
   	  row_sum = 0;
      for (j = 0; j < 3; j++) {
      
	  	row_sum += a[i][j];
     
	    printf(" %d ", a[i][j]);
      }
	  printf("%  d\n", row_sum);
     
	  printf("\n");
   }
   
   // S�tun toplamlar�n� bul ve yazd�r
   
   for (j = 0; j < 3; j++) {
      col_sum = 0;
      for (i = 0; i < 3; i++) {
         col_sum += a[i][j];
      }
      printf(" %d", col_sum);
   }

   return 0;
}

