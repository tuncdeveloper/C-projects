#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Turkish"); 
	
	
	
	int i,j;
	int matris[4][3]={5,1,11,-6,10,2,12,34,15,67,43,21};
	int temp;
	int dizi[12];
	
	printf("matrisin normal hali : \n\n");

	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			
			printf("  %d ",matris[i][j]);
		}
		printf("\n");
	}
	int k=0;
		for(i=0;i<4;i++){
			for(j=0;j<3;j++){
			
			dizi[k]=matris[i][j];
			
			k++;
		}
		
	}
	

		for(i=0;i<12;i++)
	{
		for(j=i+1;j<12;j++)
		{
			if(dizi[i]>dizi[j])
			{
				temp=dizi[i]; 			// i=0 olduðu için k(gecçici deðiþken)=45 
				dizi[i]=dizi[j];	// j=1 olduðu için dizi[j]=89 // dizi[i]=27
				dizi[j]=temp;			//	tamamdýr
			}
		}	
	}
	

		k=0;
		for(i=0;i<4;i++){
			for(j=0;j<3;j++){
			
			matris[i][j]=dizi[k];
			
			k++;
		}
		
	}
	
	printf("\n\nkucukten buyuge siralamasi : \n");
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			
			printf("  %d ",matris[i][j]);
		}
		printf("\n");
	}

	return 0;
}
