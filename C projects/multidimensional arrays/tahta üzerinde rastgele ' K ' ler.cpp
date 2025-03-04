#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
int main(){
	
	
	 setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	int i,j;
	
	char matris[8][8];

	int a[8],b[8];
		
    for(i=0; i<8; i++) {
        for(j=0; j<8; j++) {
            
			matris[i][j]='-';
        }
     
    }
        
    for (i = 0; i < 8; i++) {
        do {
            a[i] = rand() % 8 ;
            b[i]= rand() % 8 ;
            
            for (j = 0; j < i; j++) {
                if (a[i] == a[j] || b[i] == b[j]) {
                    break;
                }
           
		    }
        
		} while (j < i);
    
		matris[a[i]][b[i]]='K';
	}

    
    for(i=0; i<8; i++) {
        for(j=0; j<8; j++) {
            
			printf("%c ", matris[i][j]);
        }
        printf("\n");
    }
    
    
	return 0;
}
