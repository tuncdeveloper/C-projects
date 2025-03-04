#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<math.h>
int main(){
	
	
	 setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	int i,j;
	
	char matris[8][8];

	int a,b;
		
    for(i=0; i<8; i++) {
        for(j=0; j<8; j++) {
            
			matris[i][j]='-';
        }
     
    }
    matris[3][4]='A';
    
    for( i=0; i<8; i++) {
        
		for(j=0;j<8;j++){
			
			if((pow(j-4,2)+pow(i-3,2))==5){
				
				matris[i][j] = '*'; 
			}
			
			
		}
    }
    
    
    
    for(i=0; i<8; i++) {
        for(j=0; j<8; j++) {
            
			printf("%c ", matris[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}
