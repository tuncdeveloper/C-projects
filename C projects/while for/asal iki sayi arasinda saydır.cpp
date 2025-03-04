#include<stdio.h>
int main(){
	
	int a,b,toplam,i;
    toplam = 0;
    
    printf("Kucuk sayi gir : ");scanf("%d",&a);
	printf("Buyuk sayi gir : ");scanf("%d",&b);

	for(i=a;i<=b;i++)
	{
		toplam = 0;
        for(int j =1;j<=i;j++)
		{
          if(i%j==0)
		    toplam = toplam+1;
        }
        
       if(toplam == 2)
	   {
           printf("%d ",i);
       }
       

    }
		return 0;
}
