#include <stdio.h>

#define SIZE 100

int main() {
    int arr[SIZE];
    int size, i, j, duplicate;
    
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Tekrar eden öðeleri bul
    for (i = 0; i < size; i++) {
        duplicate = 0;
        for (j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}

