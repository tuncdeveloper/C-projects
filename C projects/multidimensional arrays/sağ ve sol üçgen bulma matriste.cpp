#include <stdio.h>

void diziBol(int B[4][4], int secim, int *C) {
    int k = 0;
    if (secim == 0) { // Sað üst üçgen
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                C[k] = B[i][j];
                k++;
            }
        }
    }
    else if (secim == 1) { // Sol üst üçgen
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < i; j++) {
                C[k] = B[i][j];
                k++;
            }
        }
    }
    else {
        printf("Hatalý seçim: %d\n", secim);
    }
}

int main() {
 
    int B[4][4] = {{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};
    int C[6];
 	int x;
 	
 	printf("secimini yap (0-1) : ");scanf("%d",&x);
    diziBol(B, x, C);
    for (int i = 0; i < 6; i++) {
        printf("%d ", C[i]);
    }
    
    
    return 0;
}
