#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
void fonk(int arr[][3],int x , int y){
	
	int i,j;
	int temp;
	
	for(i=0;i<3;i++){
	
			
			temp=arr[i][x-1];
			arr[i][x-1]=arr[i][y-1];
			arr[i][y-1]=temp;
		
	
	}	
	
	
	printf("\new matris\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
		printf(" %d ",arr[i][j]);	
		
		}

		printf("\n");
	}	
	
}

int main(){
	
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	
	
	int i,j;
	int dizi[3][3];

	int a,b;
	

	printf("\nmatis\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
		dizi[i][j]=rand()%20+1;	
		
		printf(" %d ",dizi[i][j]);	
		
		}

		printf("\n");
	}	
			
	printf("yerleri deðistirecek sütun indislerine giriniz : \n");scanf("%d",&a);scanf("%d",&b);
	
	while(a>3 || b>3){
		
		if(a>3 && b<=3){
			printf("a deðeri yanlýþ girildi lütfen tekrar : \n");
		
		scanf("%d",&a);scanf("%d",&b);
		}
			
		
		
		else if(b>3 && a<=3){
			printf("b deðeri yanlýþ girildi lütfen tekrar : \n");
			scanf("%d",&a);scanf("%d",&b);
		}
			
		
		else if(a>3 && b>3){
			
			printf("a ve b deðerleri yanlýþ girildi lütfen tekrar : \n");
			
			scanf("%d",&a);scanf("%d",&b);
		}
			
		
		
		
	}
	
	
	
	fonk(dizi,a,b);

	
	return 0;
}
