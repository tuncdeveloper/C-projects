#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int *A;
	A = (int*) malloc( sizeof(int) );
	
	printf("A'nin gosterdigi adres: %p\n\n", A);
	*A = 123;
	
	printf("A'nin degeri: %d\n\n", *A);
	
	free(A);
	
	return 0;
}
