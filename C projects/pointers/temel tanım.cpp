#include<stdio.h>
#include<stdlib.h>
int main(){
	
	
	// & değiskenin adres bilgisini verir 
	// * adresteki değeri verir 
	
	
	
	int *p;		// int sayi=10;
				// int *p=&sayi;
	int sayi=10;
	p=&sayi;
	
	
	
	printf("sayinin degeri : %d\n",*p);	// sayının  adresteki değeri ...
	
	printf("sayinin adresi : %d\n\n",&sayi); // sayının adresi ...
	
	
	
	
	printf("pointirin adresi : %d\n",&p); // pointırın adresi ...
	
	
	printf("pointirin degeri : %d\n",p); // printf("%u",p); aynı anlama geliyor adresteki konumu 
	
		
	printf("%p\n",p); // pointersın gerçek adresini %p ile gösterip değisken neyse virgülden sonra yazılır ...
	
	
	
	
	//	çok önmeli	x 'in adresi pointırın değeridir....
	
	
	
	
	
	
	
	
	
	return 0;
}
