#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
#include<math.h>
float ortalama(int a[],int n){
	
	int i,j;
	
	float top=0;
	float ort;
	
	for(i=0;i<n;i++){
		
		top=top+a[i];
	
	}
	
	ort=top/n;
	
	return ort ;
}

void fonk(int x[],int n){
	
	int i,j;
	float top2=0;
	float top3=0;
	float sapma;
	
	for(i=0;i<n;i++){
		
		top2 = pow(x[i],2)+top2;
		
		top3 = x[i]+top3 ;
		
	}
	
	sapma = sqrt((n*top2-top3*top3)/((n)*(n-1)));
		
	
		for(i=0;i<n;i++){
  		
  		
	    if(x[i]>=ortalama(x,n)+sapma*1.5){
  			
  			printf("\n%d. öðrencinin harf notu A\n",i+1);
  			
		  }
		  
  		else if(x[i]>ortalama(x,n)+sapma*0.5 && x[i]<ortalama(x,n)+sapma*1.5){
  			
  			printf("\n%d. öðrencinin harf notu B\n",i+1);
  			
		  }
		  
		 else if(x[i]>ortalama(x,n)-sapma*0.5 && x[i]<ortalama(x,n)+sapma*0.5){
  			
  			printf("\n%d. öðrencinin harf notu C\n",i+1);
  			
		  } 
		  
		  else if(x[i]>ortalama(x,n)-sapma*1.5 && x[i]<ortalama(x,n)-sapma*0.5){
  			
  			printf("\n%d. öðrencinin harf notu D\n",i+1);
  			
		  }
		  
		  else if(x[i]<ortalama(x,n)-sapma*1.5){
  			
  			printf("\n%d. öðrencinin harf notu F\n",i+1);
  			
		  }
		  
	  }

	
	
}

int main() {
	
	setlocale(LC_ALL,"Turkish");

  	int n,i,j;
  	int x[n];
  	
  	printf("öðrenci sayýsýna giriniz : ");scanf("%d",&n);
  	
  	for(i=0;i<n;i++){
		
		printf("%d. öðrencinin notu : ",i+1);scanf("%d",&x[i]);
		
	}
  	
  	fonk(x,n);
  	
   return 0;
}

