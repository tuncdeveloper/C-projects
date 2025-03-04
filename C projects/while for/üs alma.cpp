#include <stdio.h>
int main(){


     int us,taban,sonuc = 1;
	 int i ;
	
	
     printf("Taban giriniz : ");
     scanf("%d",&taban);
     
     
     
     printf("Us giriniz : ");
     scanf("%d",&us);


     for( i=0 ; i<us ; i++)
	 {
          sonuc = sonuc * taban;
     }

     printf("%d uzeri %d = %d",taban, us, sonuc);
     
     
     
     
     return 0;
}
