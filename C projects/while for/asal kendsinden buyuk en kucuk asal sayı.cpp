#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=0,i=0,kontrol=1;

     printf("Bir sayi giriniz\n");
     scanf("%d",&sayi);

     for(;;sayi++)
	 {

        for(i=2;i<sayi;i++)
		{

        	 if((sayi%i)==0)
			 {
        	 	kontrol=0;
        	 	break;
        	 }
        }

        if(kontrol==1){
        printf("asal:%d",sayi);
        break;
        }

        kontrol=1;
     }

    return 0;
}
