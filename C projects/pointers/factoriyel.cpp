#include <stdio.h>

int main() {
    int fact;
    printf("bir sayi giriniz : \n");
    scanf("%d", &fact);

    int carpim = 1;
   
    int *p;
   
    for (p=&fact; *p > 1; (*p)--) {
       
	    carpim = *p * carpim ;
    
	}

    printf("\n%d\n",carpim);
    return 0;
}

