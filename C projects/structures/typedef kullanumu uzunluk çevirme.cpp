#include <stdio.h>
#include <string.h>

typedef struct {
	
    float miktar;
    char cins[3];

} Uzunluk;

void metreyap(Uzunluk* uz) {
    
	if (strcmp((*uz).cins, "mm") == 0) {
        (*uz).miktar /= 1000;
    
		printf("%.2f mt\n", (*uz).miktar);
	}
	
	 else if (strcmp((*uz).cins, "cm") == 0) {
        (*uz).miktar /= 100;
   
   		printf("%.2f mt\n", (*uz).miktar);
    } 
	
	else if (strcmp((*uz).cins, "km") == 0) {
        (*uz).miktar *= 1000;
   
   		printf("%.0f mt\n", (*uz).miktar);
    }
    
	
}

int main() {

    Uzunluk a;

    printf("Uzunluk miktar ve cinsini giriniz: ");
    scanf("%f%s", &a.miktar, a.cins);

    metreyap(&a);

    return 0;
}

