#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

	int n ;
	int i,j;
	int c=0,t=0;
	int temp;
	int	cift[10];
	int tek[10];
	
	
	printf("memur say�s�na giriniz : ");scanf("%d",&n);
	int arr[n];
	
	
	printf("��renci numaralar�na giriniz : \n");
	for(i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0;i<n;i++){
		
		if(arr[i]%2==0){
			
			cift[c]=arr[i];
			c++;
		}
		
		else{
			
			tek[t]=arr[i];
			t++;	
		}	
	}
	
	
	for( i=0; i<c; i++){
    	for( j=i+1; j<c; j++){
        
		if(cift[i] < cift[j]){
            temp = cift[i];
            cift[i] = cift[j];
            cift[j] = temp;
        }
    }
}
	
	for(i=0; i<t; i++){
   	 for(j=i+1; j<t; j++){
        if(tek[i] < tek[j]){
            temp = tek[i];
            tek[i] = tek[j];
            tek[j] = temp;
        }
    }
}
	printf("\nacemi memurlar�n sicil numaralar� : ");
	for(i=0;i<c;i++){
		printf("%d ",cift[i]);
	}
	printf("\ndeneyimli memurlar�n sicil numaralar� : ");
	for(i=0;i<t;i++)
		printf("%d ",tek[i]);
	printf("\n\n\n");
	
	
	int memur[c][2];
	
	
	
	
	printf("n�bet listeleri : \n\n");
	
	
	 for (int i = 0; i < t; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d-%d\n", tek[i], cift[j]);
        }
    }
	
	
	return 0;
} 
