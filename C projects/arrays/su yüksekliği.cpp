#include <stdio.h>

int trap(int* height, int heightSize){
    
	int left = 0, right = heightSize - 1;
    int left_max = 0, right_max = 0;
    int water = 0;
    
    while (left < right) {
       
	    if (height[left] < height[right]) {
           
		    if (height[left] >= left_max) {
                left_max = height[left];
            } 
			
			else {
                water = water + left_max - height[left];
            }
            left++;
        } 
		
		else {
            
			if (height[right] >= right_max) {
                right_max = height[right];
            }
			
			 else {
                water += right_max - height[right];
            }
            right--;
        
		}
    }
    
    return water;
}

int main() {
    int n;
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    
    int height[n];
    printf("Enter the height of each column: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }
    
    int water = trap(height, n);
    printf("The total amount of water trapped is: %d\n", water);
    
    return 0;
}

