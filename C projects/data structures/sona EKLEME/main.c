#include <stdio.h>
#include <stdlib.h>

struct dugum
{
    int data;
    struct dugum *next;
};

struct dugum *ilk = NULL;
struct dugum *son = NULL;
int size(struct dugum* ilk);
void listele();
void basaEkle(int a);
void sonaEkle(int a);
void arayaEkle(int a, int konum);
void sil(int a);

int main()
{
    sonaEkle(1);
    sonaEkle(2);
    sonaEkle(3);
    basaEkle(4);
    basaEkle(5);
    arayaEkle(10, 2);

    printf("Liste: ");
    listele();

    sil(2);
    printf("\n2'yi sildikten sonra liste: ");
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

void basaEkle(int a)
{
    struct dugum *yeni = (struct dugum *)malloc(sizeof(struct dugum));
    yeni->data = a;
    yeni->next = ilk;
    ilk = yeni;

    // E�er liste bo�sa, son i�aret�isini g�ncelle

}

void sonaEkle(int a)
{
    struct dugum *yeni = (struct dugum *)malloc(sizeof(struct dugum));
    yeni->data = a;
    yeni->next = NULL;

    if (son == NULL)
    {
        ilk = yeni;
        son = yeni;
    }
    else
    {
        son->next = yeni;
        son = yeni;
    }
}

void arayaEkle(int a, int konum)
{
    struct dugum *yeni = (struct dugum *)malloc(sizeof(struct dugum));
    yeni->data = a;


    // E�er liste bo�sa ya da konum 0 ise ba�a ekle
    if (ilk == NULL || konum == 0)
    {
        yeni->next = ilk;
        ilk = yeni;

        // E�er liste bo�sa, son i�aret�isini g�ncelle

        return;
    }

    // Belirli bir konumdan �nceki d���m� bul
    struct dugum *gezici = ilk;
    for (int i = 0; gezici != NULL && i < konum - 1; i++)
    {
        gezici = gezici->next;
    }
    yeni->next = gezici->next;
    gezici->next = yeni;

    // E�er konum listedeki eleman say�s�ndan fazlaysa, sona ekle
    if (gezici == NULL)
    {
        sonaEkle(a);
        return;
    }

    // Yeni d���m� konumdan �nceki d���m ile sonraki d���m aras�na ekleyin

}

void sil(int a)
{
    struct dugum *gecici = ilk, *onceki = NULL;

    // Silinecek d���m� bul
    while (gecici != NULL && gecici->data != a)
    {

        onceki = gecici;
        gecici = gecici->next;

    }

    // E�er silinecek d���m bulunamazsa
    if (gecici == NULL)
    {
        printf("\n%d degeri bulunamadi.", a);
        return;
    }

    // E�er silinecek d���m ilk d���mse
    if (onceki == NULL)
    {
        ilk = gecici->next;
    }
    else
    {
        // Silinecek d���m� listeden ��kar
        onceki->next = gecici->next;
    }

    // E�er silinen d���m son d���mse, son i�aret�isini g�ncelle
    if (gecici == son)
    {
        son = onceki;
    }

    free(gecici); // D���m� serbest b�rak
}

