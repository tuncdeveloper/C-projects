#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

	int n ;
	int i,j;
	int k=0;
	int temp;
	
	int arr[6]={1,8,9,4,5,6};
	
	int a[3],b[3];
	
	
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			
			if(arr[i]>arr[j]){
				
				temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
	
	for(i=0;i<3;i++){
		
		a[i]=arr[i];
		b[i]=arr[5-k];
		k++;
	}
    
    for(i=0;i<3;i++){
    	
    	printf("%d %d ",a[i],b[i]);
	}
	
	
	return 0;
} 
