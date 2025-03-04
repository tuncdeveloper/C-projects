#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fonk(int k,int l){
		
	int	sonuc;
		
	 l=l*6;

    k=k*0.5*60;
	 	
		sonuc=fabs(k-l);
		
		if(sonuc>180 )
		{
			sonuc=360-sonuc;
			sonuc=fabs(sonuc);
		}
		
		
	return sonuc ;
}

int main(){
	
	int a,b,c;
	
	printf("2 nokta sayi gir : \n");scanf("%d%d",&a,&b);
	
	
	printf("beden alani : %d",fonk(a,b));
	
	return 0;
}
