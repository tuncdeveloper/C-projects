#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, boyut, i, j, k, m;
    scanf("%d", &boyut);
    
    n = 2 * boyut - 1;
    int matris[n][n];
    
    k = 0, m = n;

    while (k < m) {

        for (i = k; i < m; i++) {

            for (j = k; j < m; j++) {

                if (i == k || j == k || i == m-1 || j == m-1) {

                    matris[i][j] = boyut - k;

                }
            }
        }
        k++;
        m--;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}

