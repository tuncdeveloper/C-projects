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

    // Eðer liste boþsa, son iþaretçisini güncelle

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


    // Eðer liste boþsa ya da konum 0 ise baþa ekle
    if (ilk == NULL || konum == 0)
    {
        yeni->next = ilk;
        ilk = yeni;

        // Eðer liste boþsa, son iþaretçisini güncelle

        return;
    }

    // Belirli bir konumdan önceki düðümü bul
    struct dugum *gezici = ilk;
    for (int i = 0; gezici != NULL && i < konum - 1; i++)
    {
        gezici = gezici->next;
    }
    yeni->next = gezici->next;
    gezici->next = yeni;

    // Eðer konum listedeki eleman sayýsýndan fazlaysa, sona ekle
    if (gezici == NULL)
    {
        sonaEkle(a);
        return;
    }

    // Yeni düðümü konumdan önceki düðüm ile sonraki düðüm arasýna ekleyin

}

void sil(int a)
{
    struct dugum *gecici = ilk, *onceki = NULL;

    // Silinecek düðümü bul
    while (gecici != NULL && gecici->data != a)
    {

        onceki = gecici;
        gecici = gecici->next;

    }

    // Eðer silinecek düðüm bulunamazsa
    if (gecici == NULL)
    {
        printf("\n%d degeri bulunamadi.", a);
        return;
    }

    // Eðer silinecek düðüm ilk düðümse
    if (onceki == NULL)
    {
        ilk = gecici->next;
    }
    else
    {
        // Silinecek düðümü listeden çýkar
        onceki->next = gecici->next;
    }

    // Eðer silinen düðüm son düðümse, son iþaretçisini güncelle
    if (gecici == son)
    {
        son = onceki;
    }

    free(gecici); // Düðümü serbest býrak
}

