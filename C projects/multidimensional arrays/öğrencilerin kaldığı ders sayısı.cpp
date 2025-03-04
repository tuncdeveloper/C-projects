#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
int main(){
	
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	
	
	int i,j;
	int dizi[5][3];
	int ders[5];
	int sayac=0;
	float top=0;
	int k=0;
	
	for(i=0;i<3;i++){
		
		printf("\n%d. öðrencinin notlarý :\n",i+1);
		
		for(j=0;j<3;j++){
			
			scanf("%d",&dizi[i][j]);
		}
	}
	
	
	
	
	
	for(i=0;i<3;i++){
			
		
		sayac=0;
		for(j=0;j<3;j++){
				
			if(dizi[i][j]<=40){
				
				sayac++;
			}	
			
			else if(dizi[i][j]<60 && dizi[i][j]>40){
				top=0;	
				for(k=0;k<3;k++){
					
					top=dizi[i][k]+top;
						
				}
			
			if(top/3*1.0<60){
				
					sayac++;
					
					}	
			
					
			}
		
			
			
		
		}
			ders[i]=sayac;
	}
	
	
	
	printf("\n\nkaldýðý ders sayýsý : \n\n");
	
	
	for(i=0;i<3;i++){
		
		printf("%d. öðrencinin kaldýðý ders sayýsý : %d\n",i+1,ders[i]);
		
	}
	
	
	
		
	
	return 0;
}
