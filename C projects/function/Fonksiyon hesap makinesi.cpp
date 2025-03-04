#include<stdio.h>



char harf(char x,float i,float j)
{
	
	switch(x)
	{
		case 'a':	printf("islemin sonucu : %.2f",i+j);	break;
		case 'b':	printf("islemin sonucu : %.2f",i-j);	break;
		case 'c':	printf("islemin sonucu : %.2f",i*j);	break;
		case 'd':	printf("islemin sonucu : %.2f",i/j);	break;
	}
	


		
}
int main(){
	
	float m , n ;
	char y ;
	
	printf("a-)toplama\nb-)cikarma\nc-)carpma\nd-)bolme\nf-)karesi\n");
	
	printf("iki sayi giriniz : \n");scanf("%f%f",&m,&n);
	
	printf("\nislemlerden birini seciniz : ");scanf("%s",&y);
	
	harf(y,m,n);
		
		
	
	return 0;
}
