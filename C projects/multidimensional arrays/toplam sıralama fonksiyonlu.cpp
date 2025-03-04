#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void fonk(int n, int matris[][n]) {
    
	int i, j;
    int temp;
    
    
    printf("matrisin normal hali : \n\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            printf("  %d ", matris[i][j]);
        }
        printf("\n");
    }
}

void fonk2(int n, int matris[]) {
    int i, j;
    int temp;
    
    for (i = 0; i < n * n; i++) {
        for (j = i + 1; j < n * n; j++) {
            if (matris[i] > matris[j]) {
                temp = matris[i];
                matris[i] = matris[j];
                matris[j] = temp;
            }    
        }
    }
}

void fonk3(int n, int matris[][3]) {
    int i, j;
    int temp;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}

int main() {
    setlocale(LC_ALL, "Turkish"); 
    
    int n = 3;
    int A[3][3] = {{5, 1, 11}, {2, 34, 15}, {67, 43, 21}};

    fonk(n, A);
    printf("sýralý\n\n");
    fonk2(n, A);
    printf("\n\n\n");
    fonk3(n, A);

    return 0;
}

