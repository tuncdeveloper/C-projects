#include <stdio.h>
#include <string.h>
#include <ctype.h>

int fonk(char* dizi) {

    int i,j;
	
    int n = strlen(dizi);
	int flag = 0;
	int sayac=0;
	
	printf("tekrar eden harfler : ");
    
	for (int i = 0; i < n; i++) {
        
        if (strchr(dizi + i + 1, dizi[i])) { // dizi[i]'nin daha ileride tekrar ettiðini kontrol et
           
		    int flag = 0;
           
		    for (int j = 0; j < i; j++) { // dizi[i]'nin daha önce kontrol edilip edilmediðini kontrol et
                if (dizi[i] == dizi[j]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                sayac++;
                printf(" %c", dizi[i]);
            }
        }
    }
    return sayac;
}


int main() {
 
    char kelime[100];
    

    printf("Lutfen bir cumle giriniz : ");
    fgets(kelime, 100, stdin);

      
	printf("\n\ntekrar eden harflerin sayisi : %d",fonk(kelime));
	
	
    return 0;

}

