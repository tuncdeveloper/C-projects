#include <stdio.h>
#include <string.h>

struct Ogrenci { 
    char ad[30];
    char soyad[30];
    int ogrenciNo;
    int kayitYili;
    char TCKimlik[12];
};

int main(){
    struct Ogrenci liste[100];
    
	strcpy(liste[0].ad, "Ferhat"); // ilk ogrencinin adina "ferhat" ata
    strcpy(liste[0].soyad, "Tunc"); // ilk ogrencinin soyadýna "tunc" ata
	liste[0].ogrenciNo = 220201070; // ilk ogrencinin numarasina 123 ata
    liste[0].kayitYili = 2022; // ilk ogrencinin kayit yilina 2015 ata
    
	printf("ad : %s\nsoyad : %s\nogrenci no : %d\nkayit yili : %d", liste[0].ad,liste[0].soyad ,liste[0].ogrenciNo,liste[0].kayitYili); // ilk ogrencinin adini ve numarasini yaz
	
	return 0;
}

