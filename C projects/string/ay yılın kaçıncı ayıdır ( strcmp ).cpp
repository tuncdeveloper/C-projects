#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fonk(char *ay){
	
	int numara = -1; // Ay�n numaras� (ba�lang��ta -1 olarak atan�r)
	
	if (strcmp(ay, "ocak") == 0) {
        numara = 1;
    } else if (strcmp(ay, "subat") == 0) {
        numara = 2;
    } else if (strcmp(ay, "mart") == 0) {
        numara = 3;
    } else if (strcmp(ay, "nisan") == 0) {
        numara = 4;
    } else if (strcmp(ay, "mayis") == 0) {
        numara = 5;
    } else if (strcmp(ay, "haziran") == 0) {
        numara = 6;
    } else if (strcmp(ay, "temmuz") == 0) {
        numara = 7;
    } else if (strcmp(ay, "agustos") == 0) {
        numara = 8;
    } else if (strcmp(ay, "eylul") == 0) {
        numara = 9;
    } else if (strcmp(ay, "ekim") == 0) {
        numara = 10;
    } else if (strcmp(ay, "kasim") == 0) {
        numara = 11;
    } else if (strcmp(ay, "aralik") == 0) {
        numara = 12;
    }			

    // Ay�n numaras�n� yazd�r
    if (numara != -1) {
        printf("%s ayi yilin %d. ayidir.\n", ay, numara);
        return numara;
    } else {
        printf("Gecersiz ay adi: %s\n", ay);
        return 0;
    }
	
	
	
}
int main() {
    char ay[12]; // Kullan�c�n�n girece�i ay�n ad�
    

    printf("Lutfen bir ay girin: ");
    scanf("%s", ay); // Ay� kullan�c�dan oku

    printf("%d",fonk(ay));
    

    return 0;
}

