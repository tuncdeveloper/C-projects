#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Turkish");
	
    float value;
    
	char soru[100];
    
	char from[3], to[3];
    

    printf("Uzunluk ölçü birimleri: km, m, cm, mm\n");
    printf("Örnek kullaným: '5 m = cm'\n");
 	
    	
        printf("\nSoru: ");
        fgets(soru,100,stdin);
		sscanf(soru,"%f %s %s", &value, from, to);
	
        if (strcmp(from, "km") == 0) {
        	
        	
            if (strcmp(to, "m") == 0) {
                printf("%.2f km = %.2f m\n", value, value*1000);
            }
			
			 else if (strcmp(to, "cm") == 0) {
                printf("%.2f km = %.2f cm\n", value, value*100000);
            }
			
			 else if (strcmp(to, "mm") == 0) {
                printf("%.2f km = %.2f mm\n", value, value*1000000);
            }
			
			 else {
                printf("Hatalý birim girdiniz. Lütfen km, m, cm veya mm kullanýn.\n");
          	}
        
		
		} 
		
		
		
		
		else if (strcmp(from, "m") == 0) {
        
		
		    if (strcmp(to, "km") == 0) {
                printf("%.2f m = %.2f km\n", value, value/1000);
            }
			
			 else if (strcmp(to, "cm") == 0) {
                printf("%.2f m = %.2f cm\n", value, value*100);
            }
			
			 else if (strcmp(to, "mm") == 0) {
                printf("%.2f m = %.2f mm\n", value, value*1000);
            }
			
			 else {
                printf("Hatalý birim girdiniz. Lütfen km, m, cm veya mm kullanýn.\n");
            }
        
		
		}
		
		
		
		
		 else if (strcmp(from, "cm") == 0) {
            
			
			if (strcmp(to, "km") == 0) {
                printf("%.2f cm = %.6f km\n", value, value/100000);
            }
			
			 else if (strcmp(to, "m") == 0) {
                printf("%.2f cm = %.6f m\n", value, value/100);
            }
			
			 else if (strcmp(to, "mm") == 0) {
                printf("%.2f cm = %.2f mm\n", value, value*10);
            }
			
			 else {
                printf("Hatalý birim girdiniz. Lütfen km, m, cm veya mm kullanýn.\n");
            }
        
		
		}
		
		
		
		
		 else if (strcmp(from, "mm") == 0) {
            
			
			if (strcmp(to, "km") == 0) {
                printf("%.2f mm = %f km\n", value, value/1000000);
            } 
			
			else if (strcmp(to, "m") == 0) {
                printf("%.2f mm = %f m\n", value, value/1000);
            }
			
			else if (strcmp(to, "cm") == 0) {
                printf("%.2f mm = %f cm\n", value, value/10);
           	}     
		
		
		}
			
				
return 0;
}			
