#include<stdio.h>
#include<stdlib.h>
void fonk(int *dizi,int n){
	
	int i;
	int j;
	int flag = 0;
	
	printf("dizi nin ilk hali : \n\n");
	for(i=0;i<n;i++){
		
		printf("%d ",dizi[i]);
	}
	
	printf("\n\n");
	for(i=0;i<n;i++){
		
		flag=0;
		
		for(j=0;j<n;j++){
		
			if(dizi[i]==dizi[j] && i!=j){
				
				flag=1;
				
				
				break;
			}
			
			
	
		}
		
		if(flag==1){
			
			printf("-1 ");
			
		}
		else
			printf("%d ",dizi[i]);
		
	
	}
		
	
	

	
}
int main(){
	
	
	int dizi[9] = {1,120,4,6,12,25,6,6,120};
	int n ;	
	
	n=sizeof(dizi)/sizeof(dizi[0]);
	

	
	fonk(dizi,n);
	
	
	
	
	

	
	return 0;
}
