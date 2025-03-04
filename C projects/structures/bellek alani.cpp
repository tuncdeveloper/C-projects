#include <stdio.h>
#include <stdlib.h>

struct Tarih {
    int gun; // 4 byte
    int ay;	 // 4 byte 			//Tarih toplam = 12 byte alan kaplar
    int yil; // 4 byte
};

struct Ogrenci {
    char ad[30];				// 30 byte
    char soyad[30];				// 30 byte
    int ogrenciNo;				// 4 byte				
    int kayitYili;				// 4 byte			Ogrenci toplam = 104 byte alan kaplar
    char TCKimlik[12];			// 12 byte
    struct Tarih dogumTarihi;	// 12 byte
    struct Tarih kayitTarihi;	// 12byte
};

int main() {
    printf("int: %d\n", sizeof(int));
    printf("Tarih: %d\n", sizeof(struct Tarih));
    printf("Ogrenci: %d\n", sizeof(struct Ogrenci));
    return 0;
}

