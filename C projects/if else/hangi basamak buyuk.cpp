#include<stdio.h>
int main(){
	//rakamlarý farklý 3 basamaklý bir sayidan saðdan okuyunca en büyük sayinin kaçýncý basamakta olduðunu söyle...
	
	int x,y,z,birler,onlar,yuzler;
	
	printf("sayi gir = ");
	scanf("%d",&x);
	
	birler=x%10;
	yuzler=x/100;
	y=x/10;
	onlar=y%10;




if(yuzler>0){

	
	if(birler>onlar && birler>yuzler)
	{
		printf("en buyuk rakami sagdan birinci rakamidir\n(birler basamagi)");
	}
	
	else if(onlar>birler && onlar>yuzler)
	{
		printf("en buyuk rakami sagdan ikinci rakamidir\n(onlar basamagi)");
	}
	
	else if(yuzler>birler && yuzler>onlar)
	{
		printf("en buyuk rakami sagdan ucuncu rakamidir\n(yuzler basamagi)");
	}
	
		}	
	
	else 
	{
		printf("tekrar giriniz");	
	}
	
	
	
	
	return 0;
}
