#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int nums[4];
    int sum = 0;

    for (int i = 0; i < 4; i++) {

        printf("Enter number %d: ", i+1);
        
		fgets(str, sizeof(str), stdin);
        
		nums[i] = atoi(str);
        
		sum =sum + nums[i];

    }

    printf("Sum of the numbers is %d\n", sum);

    return 0;
}

