#include<stdio.h>
int main(){
	
    int x,y,z;
    
printf("x e giriniz :");
scanf("%d",&x);
printf("y e giriniz :");
scanf("%d",&y);
printf("z e giriniz :");
scanf("%d",&z);


	  if(x>y&&x>z){
	  	printf("en buyuk sayi x");}
	  	
	if(y>x&&y>z){
	printf("en buyuk y");
	}
	else
	printf("en buyuk z");
	
	
	return 0;
}
