#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fonk(int a){
	int i,x,y;
	int m=1,n=0;
	int k;
	int enb=1;
	
	

	a=pow(10,a-1);
	
	for(i=a;i<=a*10;i++){	
		x=i;
		m=1;
		n=0;
		while(x!=0){
			k=x%10;
			x=x/10;
		
			m=m*k; 
			n=n+k;
			y=i;			
		}
		
		
		if(y==m*n){
			if(enb<y)
			{
				enb=y;
			}
			
		}
		
	}	
		
		
	return enb;	
}
int main(){
	
	int sayi;
	printf("basamak degerine gir : ");scanf("%d",&sayi);
	
	printf("%d",fonk(sayi));
	
	
	
	return 0;
}

