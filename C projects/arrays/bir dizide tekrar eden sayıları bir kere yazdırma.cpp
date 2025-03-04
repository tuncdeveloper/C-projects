#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
	
int dizi[100], n, i, j;
bool flag;


printf("Dizinin eleman sayisini giriniz: ");
scanf("%d", &n);

printf("Dizinin elemanlarini giriniz: \n");
for(i = 0; i < n; i++)
    scanf("%d", &dizi[i]);


printf("Tekrar eden sayilar: ");
for(i = 0; i < n; i++) {
	
    flag = false;
    
    for(j = 0; j < i; j++){
        if(dizi[i] == dizi[j]) {
            flag = true;
            break;
        }
	}
    if(flag == false) {
    	
        for(j = i + 1; j < n; j++)
            if(dizi[i] == dizi[j]) {
                printf("%d ", dizi[i]);
                break;
            }
    }
}
return 0;
}
