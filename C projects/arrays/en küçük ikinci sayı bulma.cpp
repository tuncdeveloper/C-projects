#include <stdio.h>

int main() {
   int arr[] = {10, 5, 2, 7, 3, 9}; // Örnek bir dizi
   int n = sizeof(arr) / sizeof(arr[0]);
   int min1 = arr[0], min2 = arr[0]; // minimum deðerlerin baþlangýç deðeri olarak ilk eleman atanýr
   
   for(int i = 0; i < n; i++){
   	
      if(arr[i] < min1){
      	
         min2 = min1; // mevcut en küçük deðeri min2 olarak kaydet
         min1 = arr[i]; // yeni en küçük deðeri min1 olarak kaydet
      }
	   
	  else if(arr[i] < min2 && arr[i] != min1) {
        min2 = arr[i]; // yeni en küçük 2. deðeri min2 olarak kaydet
      
	  }
   }
   
   printf("En kuçuk 2. sayi: %d ", min2);
   return 0;
}

