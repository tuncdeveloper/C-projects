#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int num)
{
    int fact = 1;
    int i;
    for(i = 1; i  <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

double sumfunc(int n, int x)
{
    double toplam = 0.0;

    int i;
    for(i = 1; i <= n; i++) {
        double f = (double) fact(2*i - 1);
        double p = (double) pow(x, i);
        double v = p / f;
        toplam += v;

        /*
        printf("\ni: %d", i);
        printf("\nPow: %f", pow(x, i));
        printf("\nfact: %f\nToplam: %f\n\n", f, toplam);
        */
    }

    return toplam;
}

int main()
{

    int n, x;

    printf("x: ");
    scanf("%d", &x);

    printf("n: ");
    scanf("%d", &n);

    double toplam = sumfunc(n, x);

    printf("\nToplam: %f", sumfunc(n, x));
    printf("\n%f degerinin taban degeri: %f\n\n", toplam, floor(toplam));

    return 0;
}

