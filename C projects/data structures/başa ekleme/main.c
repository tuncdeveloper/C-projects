#include <stdio.h>
#include <stdlib.h>

struct dugum
{
    int data;
    struct dugum *next;
};

struct dugum *ilk = NULL;
struct dugum *son = NULL;

void listele();
void ekle(int a);
void sonekle(int a);

int main()
{
    ekle(1);
    ekle(2);
    ekle(3);
    ekle(4);
    ekle(5);
    sonekle(55);
    listele();
    return 0;
}

void listele()
{
    struct dugum *liste = ilk;
    while (liste != NULL)
    {
        printf("%d\t", liste->data);
        liste = liste->next;
    }
}
void sonekle(int a) {
    struct dugum *yeni = (struct dugum *)malloc(sizeof(struct dugum));

    if (yeni == NULL) {
        printf("Bellek tahsis hatasi");
        exit(1);
    }

    yeni->data = a;
    yeni->next = NULL;

    if (ilk == NULL) {
        // Eðer liste boþsa, hem ilk hem de son düðümü yeni düðüm olarak ayarla
        ilk = yeni;
        son = yeni;
    } else {
        // Liste boþ deðilse, son düðümün next'i olarak yeni düðümü ayarla ve son düðümü güncelle
        son->next = yeni;
        son = yeni;
    }
}


void ekle(int a)
{
    struct dugum *yeni = (struct dugum *)malloc(sizeof(struct dugum));

    yeni->data = a;
    yeni->next = ilk;
    ilk = yeni;
}
