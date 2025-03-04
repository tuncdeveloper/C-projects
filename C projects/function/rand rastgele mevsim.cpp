#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	srand(time(NULL));
	
	int x ,a;
	
	printf("kacinci ay olduguna gir : ");scanf("%d",&a);
	
	x=1+rand()%4;
	
if(a==1 || a==2 || a==12){
	switch(x)
	{
		case 1 : printf("yaz");break;
		
		case 2 : printf("ilkbahar");break;
		
		case 3 : printf("sonbahar");break;
		
	}
}
	
if(a==3 || a==4 || a==5){
	switch(x)
	{
		case 1 : printf("yaz");break;
		
		case 2 : printf("kis");break;
		
		case 3 : printf("sonbahar");break;
		
	}
}

if(a==6 || a==7 || a==8){
	switch(x)
	{
		case 1 : printf("ilkbahar");break;
		
		case 2 : printf("kis");break;
		
		case 3 : printf("sonbahar");break;
		
	}
}

if(a==9 || a==10 || a==11){
	switch(x)
	{
		case 1 : printf("yaz");break;
		
		case 2 : printf("kis");break;
		
		case 3 : printf("ilkbahar");break;
		
	}
}	
	
	return 0;
}
