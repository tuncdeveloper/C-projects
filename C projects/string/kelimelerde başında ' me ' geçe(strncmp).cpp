#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char ad[100][100];
    int i=0;
    
    while(1) {
        printf("Isim giriniz (Cikmak icin 'q' tusuna basiniz): ");
        scanf("%s", name);
       	
	    if(name[0] == 'q') break;
       	
	    if(strncmp(name, "me", 2) == 0) {
        		
			strcpy(ad[i], name); 
			i++;
		}
	}
    
    printf("Girilen isimlerin basinda 'me' ile baslayanlari:\n");
    
    for(int j=0; j<i; j++){
        printf("%s\n", ad[j]);
    }
    
	return 0;
}

