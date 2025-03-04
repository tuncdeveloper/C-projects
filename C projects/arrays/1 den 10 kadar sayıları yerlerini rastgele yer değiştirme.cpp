#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i, j, temp;
   
   // Rastgele s�ralama i�in seed ayar�
   srand(time(NULL));
   
   // Yerleri rastgele de�i�tirme i�lemi
   for (i = 9; i > 0; i--) {
      
	  j = rand() % (i + 1);
      
	  temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
   }
   
   // Yeni s�ralama ekrana yazd�r�l�r
   printf("Sorularin yeni sirasi:\n");
   for (i = 0; i < 10; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");
   
   return 0;
}

