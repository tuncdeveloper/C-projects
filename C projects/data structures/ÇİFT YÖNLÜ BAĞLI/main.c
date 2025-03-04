#include <stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *ilk=NULL, *son=NULL;

void SonaEkle(int a)
{
    struct node *yeni = (struct node*) malloc(sizeof(struct node));
    yeni->data=a;

    if(ilk==NULL)
    {
        ilk=yeni;
        son=yeni;
        son->next=son;
        son->prev=ilk;
    }
    else
    {
        son->next=yeni;
        yeni->prev=son;
        yeni->next=ilk;
        ilk->prev=yeni;
        son=yeni;

    }
}



void Listele()
{
    struct node *liste=ilk;
    while(liste->next!=ilk)
    {
        printf("%d\t",liste->data);
        liste=liste->next;
    }
    printf("%d\t",liste->data);
}

void Sil(int x)
{
    struct node *sil=ilk;
    while(sil!=NULL)
    {
        if(sil->data==x) break;
        else
        {
            sil=sil->next;
        }
    }

    if(sil!=NULL)
    {
        if(sil==ilk)
        {
            sil->prev->next=sil->next;
            sil->next->prev=sil->prev;
            ilk=ilk->next;

        }
        else if(sil==son)
        {
            sil->prev->next=sil->next;
            sil->next->prev=sil->prev;
            son=son->prev;
        }
        else
        {
            sil->prev->next=sil->next;
            sil->next->prev=sil->prev;
        }

        free(sil);
    }


}

int main()
{

    SonaEkle(5);
    SonaEkle(3);
    SonaEkle(2);
    SonaEkle(4);
    SonaEkle(1);
    printf("\n");
    Listele();
    Sil(1);
    printf("\n");
    Listele();
    Sil(5);
    printf("\n");
    Listele();
}
