#include <stdio.h>
#include <string.h>
#include <time.h>

struct Ogrenci {
    char ad[30];
    char soyad[30];
    int ogrenciNo;
    int kayitYili;
    char TCKimlik[12];
};

int main(){
    struct Ogrenci liste[100];

    int i, j;
    char salla[30];
    srand(time(NULL));

    for(i = 0; i < 20; i++){    // 20 öðrenci

    	for(j = 0; j < 1+rand()%10; j++){

    		salla[j] = 65 + rand() % 25;
		}

    	salla[j] = '\0';
    	strcpy(liste[i].ad, salla);

		for(j = 0; j < 1+rand()%10; j++){

    		salla[j] = 65 + rand() % 25;
		}

    	salla[j] = '\0';
    	strcpy(liste[i].soyad, salla);

		liste[i].ogrenciNo=rand()%1000;


	}


	for(i = 0; i < 20; i++){

		printf("%d. ogrencinin ad soyad ve NO ' su:  %10s %10s  %6d\n",i+1, liste[i].ad,liste[i].soyad,liste[i].ogrenciNo);
	}


	return 0;
}

