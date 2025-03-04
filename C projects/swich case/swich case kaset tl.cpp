#include<stdio.h>
int main(){
	// A kaset 1 er , b kaset 2 er lira , c kaseet 3 er lira , d kaset 4 er lira ...
	
	int y,z,a,b,c,k,m,q;
	char x;
	
	
	printf("A kaset\nB kaset\nC kaset\nD kaset\n\n");
	printf("Bir kaset seciniz = ") ; scanf("%c",&x) ;
	
	
	
	switch(x)
	{
		
		case 'a' : printf("kac tane = "); scanf("%d",&y);
					
					z=y*1;		
					printf("ucreti :%d",z); break;
		
		case 'b' : printf("kac tane = "); scanf("%d",&a);
		
					b=a*2;
					printf("ucreti :%d",b); break;
							
		case 'c' : printf("kac tane = "); scanf("%d",c);
		
					q=c*3;
					printf("ucreti :%.1f",q); break;
					
		case 'd' :  printf("kac tane = "); scanf("%d",&k);
					
					m=k*4;
					printf("ucreti :%d",m); break;		
		
		
	}	
		
		
		
		
		
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
