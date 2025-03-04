#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Turkish"); 
	
	
	int n=4;
	int i,j;
	int matris[4][4]={0,34,55,66,32,0,12,34,56,67,0,21,21,23,54,0};
	
	
	

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			printf("   %d  ",matris[i][j]);
		}
		printf("\n");
	}



	int x,numara;
	
		
	printf("bulunduðunuz þehrin numarýsýna giriniz(1-4) : ");scanf("%d",&x);
	int enk=999;
	
	
for(j=0;j<4;j++){
	

	
	if(matris[x-1][j]<enk && j!=x-1){
		
		enk=matris[x-1][j];
		numara=j+1;
		
	}
}
	
		printf("\n  %d numarali þehrie en yakin þehir numarasi : %d\n  en yakin þehrin mesafasi : %d",x,numara,enk);

	
	return 0;
}
