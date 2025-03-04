#include <stdio.h>

void yemekUykuBul(char *dizgi) {
    
	int yemekSayisi = 0;
    int uykuSayisi = 0;
    int i = 0;
    
    
    while (dizgi[i] != '\0') {
    
	    if (dizgi[i] == 'Y') {
            yemekSayisi++;
            while (dizgi[i] == 'Y') {
                i++;
            }
        } else if (dizgi[i] == 'U') {
            uykuSayisi++;
            while (dizgi[i] == 'U') {
                i++;
            }
        } else {
            i++;
        }
    }
    printf("Yemek Ogun: %d\n", yemekSayisi);
    printf("Yemek Seans: %d\n", uykuSayisi);
}

int main() {
    char *dizgi = "UUUUYYYUYYYYUUUUYUUUYYUU";
    yemekUykuBul(dizgi);
    return 0;
}

