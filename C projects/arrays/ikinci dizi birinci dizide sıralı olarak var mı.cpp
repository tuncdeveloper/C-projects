#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i, j, found;
    
    printf("Birinci dizi eleman sayisini giriniz: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    
	printf("Birinci dizinin elemanlarini giriniz:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    
    printf("Ikinci dizi eleman sayisini giriniz: ");
    scanf("%d", &n2);
    
	int arr2[n2];
    
	printf("Ikinci dizinin elemanlarini giriniz:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    
    
    
    found = 0;
    for (i = 0; i < n1 - n2 + 1; i++) {
    	
        if (arr1[i] == arr2[0]){
        	
            found = 1;
            for (j = 1; j < n2; j++) {
                if (arr1[i+j] != arr2[j]) {
                    found = 0;
                    break;
                }
            }
            
        }
    }
    if(found==1)
    	printf("var\n");
    
    else
    printf("Yok\n");
    
	return 0;
}

