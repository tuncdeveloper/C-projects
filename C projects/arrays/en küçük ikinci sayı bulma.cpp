#include <stdio.h>

int main() {
   int arr[] = {10, 5, 2, 7, 3, 9}; // �rnek bir dizi
   int n = sizeof(arr) / sizeof(arr[0]);
   int min1 = arr[0], min2 = arr[0]; // minimum de�erlerin ba�lang�� de�eri olarak ilk eleman atan�r
   
   for(int i = 0; i < n; i++){
   	
      if(arr[i] < min1){
      	
         min2 = min1; // mevcut en k���k de�eri min2 olarak kaydet
         min1 = arr[i]; // yeni en k���k de�eri min1 olarak kaydet
      }
	   
	  else if(arr[i] < min2 && arr[i] != min1) {
        min2 = arr[i]; // yeni en k���k 2. de�eri min2 olarak kaydet
      
	  }
   }
   
   printf("En ku�uk 2. sayi: %d ", min2);
   return 0;
}

