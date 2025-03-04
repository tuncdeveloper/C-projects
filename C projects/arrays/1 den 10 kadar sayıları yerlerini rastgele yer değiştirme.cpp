#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i, j, temp;
   
   // Rastgele sýralama için seed ayarý
   srand(time(NULL));
   
   // Yerleri rastgele deðiþtirme iþlemi
   for (i = 9; i > 0; i--) {
      
	  j = rand() % (i + 1);
      
	  temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
   }
   
   // Yeni sýralama ekrana yazdýrýlýr
   printf("Sorularin yeni sirasi:\n");
   for (i = 0; i < 10; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");
   
   return 0;
}

