#include <stdio.h>
int ebob(int x, int y);

int main()
{
   int x, y;
   printf("pozitif iki tam sayi girin:\n");
   scanf("%d %d",&x,&y);

   printf("%d ve %d sayisinin OBEB'i %d.",x,y,ebob(x,y));
   return 0;
}

int ebob(int x, int y)
{
    if (y!= 0)
       return ebob(y,x%y);
    else 
       return x;
}

	/*
		x	y	ebobu	
		18	12
		12	6
		6	0
						*/
