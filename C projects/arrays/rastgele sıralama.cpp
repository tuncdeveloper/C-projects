#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	
	int i , j,k,index;
	srand(time(NULL));
	
	
	int a[5]={12,7,8,32,4};
	
	printf("otomato siralama : ");
	for ( i = 0; i < 5; i++){ 
	   
    	
    	k = rand() % 5;
		
		index = a[i];
    	a[i] = a[k];
    	a[k] = index;
	}
	
	for(i=0;i<5;i++){
		printf(" %d ",a[i]);
	}
	
	
	return 0;
}
