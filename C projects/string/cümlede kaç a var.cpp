#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    char cumle[101];

    printf("Cumleyi girin: ");
    fgets(cumle, 101,stdin);

    int sayac= 0;

    for (int i = 0; cumle[i] != '\0'; i++) {
        
        
		if (((cumle[i] == 'a' ) || (cumle[i] == 'A'))&& (cumle[i+1] != ' ') && (cumle[i+1] != '\0')) {
            sayac++;
        }
    }

    printf("\nCumlede %d a veya A  vardir.\n", sayac);

    return 0;
}

