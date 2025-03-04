#include <stdio.h>
#include <string.h>

struct Ogrenci {
    char ad[30];
    char soyad[30];
    double ort;
};

int main() {
    struct Ogrenci liste[10];
    int i, j;
    char temp[30];

    for (i = 0; i < 3; i++) {
        printf("%d. ogrencinin adi, soyadi ve ortalamasi giriniz: ", i+1);
        scanf("%s %s %lf", liste[i].ad, liste[i].soyad, &liste[i].ort);
    }

    // Soyadlarý alfabetik olarak sýralayýn
    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            
			if (strcmp(liste[i].soyad, liste[j].soyad) > 0) {
               
			    strcpy(temp, liste[i].ad);
                strcpy(liste[i].ad, liste[j].ad);
                strcpy(liste[j].ad, temp);

                strcpy(temp, liste[i].soyad);
                strcpy(liste[i].soyad, liste[j].soyad);
                strcpy(liste[j].soyad, temp);

                double temp_ort = liste[i].ort;
                liste[i].ort = liste[j].ort;
                liste[j].ort = temp_ort;
            }
        }
    }

    printf("\n--------Liste-------\n\n");

    for (i = 0; i < 3; i++) {
        printf("%d. ogrencinin: %s %s  ortalamasi: %.2lf\n", i+1, liste[i].ad, liste[i].soyad, liste[i].ort);
    }

    return 0;
}

