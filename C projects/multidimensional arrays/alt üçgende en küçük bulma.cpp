#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int diziyaz(int matris[][4]){
	
	int i,j,dizi[10],k=0;
	
		printf("\nsiralanmis hali : \n\n");
	
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
		if(i+j>3){
			
		dizi[k]=matris[i][j];	
			
		k++;
		
		}	
	}
 }
 
 	for(i=0;i<k;i++){
 		printf("%d ",dizi[i]);
	 }
 int enk;
 
 enk =dizi[0];
 
 for( i = 1; i < k; i++) {
        if(dizi[i] < enk) {
            enk = dizi[i];
        }
    }
	
	return enk;
}

int main(){
	setlocale(LC_ALL, "Turkish"); 
	
	
	
	int i,j;
	int matris[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,3,9,1,16};
	int temp;
	
	printf("matrisin normal hali : \n\n");

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			printf("  %d ",matris[i][j]);
		}
		printf("\n");
	}

	printf("dizinin en kucuk elemani : %d",diziyaz(matris));

	return 0;
}
