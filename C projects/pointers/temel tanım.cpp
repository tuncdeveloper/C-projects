#include<stdio.h>
#include<stdlib.h>
int main(){
	
	
	// & de�iskenin adres bilgisini verir 
	// * adresteki de�eri verir 
	
	
	
	int *p;		// int sayi=10;
				// int *p=&sayi;
	int sayi=10;
	p=&sayi;
	
	
	
	printf("sayinin degeri : %d\n",*p);	// say�n�n  adresteki de�eri ...
	
	printf("sayinin adresi : %d\n\n",&sayi); // say�n�n adresi ...
	
	
	
	
	printf("pointirin adresi : %d\n",&p); // point�r�n adresi ...
	
	
	printf("pointirin degeri : %d\n",p); // printf("%u",p); ayn� anlama geliyor adresteki konumu 
	
		
	printf("%p\n",p); // pointers�n ger�ek adresini %p ile g�sterip de�isken neyse virg�lden sonra yaz�l�r ...
	
	
	
	
	//	�ok �nmeli	x 'in adresi point�r�n de�eridir....
	
	
	
	
	
	
	
	
	
	return 0;
}
