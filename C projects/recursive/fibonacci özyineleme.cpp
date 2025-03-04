#include <stdio.h>
int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	int x;
	printf("sayi gir : ");scanf("%d",&x);
	
    for(int i=1; i<x+1; i++)
    {
        printf("%d ", fibonacci(i));
    }
    
    
    return 0;
}
