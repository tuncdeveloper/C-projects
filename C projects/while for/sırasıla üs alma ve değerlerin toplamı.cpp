#include <stdio.h>
int main(){


     int us,taban,sonuc = 1,a=0;
	 int i,j ;
	
	
     printf("Taban giriniz : ");
     scanf("%d",&taban);
     
     
     
     printf("Us giriniz : ");
     scanf("%d",&us);

	for(i=1;i<=us;i++){
		
			sonuc = sonuc * taban;
    
     	 	printf("%d uzeri %d = %d\n",taban, i, sonuc);
     	 	
     	 	
     	 	a=a+sonuc;
     
	 }
	 
	 	
	 		printf("%d",a);
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
     
     return 0;
}
