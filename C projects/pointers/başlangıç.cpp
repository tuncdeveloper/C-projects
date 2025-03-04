#include<stdio.h>
#include<stdlib.h>
int main(){
	
	
	int a=4,*ap;
	float b=5.2,*bp;
	double c=3.78945,*cp;
	char d='k',*dp;
	
	int array[5]={1,2,3,4,5},*arrayp;
	
	
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	
	arrayp=&array[1];
	
	printf("%p adresindeki int in degeri : %d\n",ap,*ap);
	printf("%p adresindeki float in degeri : %f\n",bp,*bp);
	printf("%p adresindeki double in degeri : %lf\n",cp,*cp);
	printf("%p adresindeki char in degeri : %c\n",dp,*dp);
	printf("%p adresindeki dizin in degeri : %d\n",arrayp,*arrayp);
	
	printf("\n\n\n\n%u adresindeki int in degeri : %d\n",ap,*ap);
	printf("%u adresindeki float in degeri : %f\n",bp,*bp);
	printf("%u adresindeki double in degeri : %lf\n",cp,*cp);
	printf("%u adresindeki char in degeri : %c\n",dp,*dp);
	printf("%u adresindeki dizin in degeri : %d\n",arrayp,*arrayp);
	
	
	return 0;
}
