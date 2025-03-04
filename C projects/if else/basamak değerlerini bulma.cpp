#include<stdio.h>

int main (){
	
	
	
int sayi, birler , onlar , yuzler ;

printf("3 basamakli sayiya giriniz : ");
scanf("%d",&sayi);


birler = sayi%10 ;

onlar = (sayi%100-birler)/10;

yuzler = (sayi - (onlar*10 + birler ))/100 ;
	
printf("birler basamagi :%d\n onlar basamagi : %d\n yuzler basamagi:%d",birler,onlar,yuzler);	
	
	
	
	
	
	
	
	
	return 0;
}
