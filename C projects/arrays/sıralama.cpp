#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *ilk=NULL, *son=NULL;

void Ekle(int a)
{
    struct node *yeni = (struct node*) malloc(sizeof(struct node));
    yeni->data=a;
    if(ilk==NULL)
    {
        ilk=yeni;
        son=yeni;
        son->next=NULL;
    }
    else
    {
        son->next=yeni;
        son=yeni;
        son->next=NULL;
    }
}

void Cikar()
{
    struct node *sil;
    if(ilk!=NULL)
    {
        sil=ilk;
        ilk=ilk->next;
        free(sil);

    }

}


void Listele()
{
    struct node *liste=ilk;
    while(liste!=NULL)
    {
        printf("%d\t",liste->data);
        liste=liste->next;
    }

}


int main()
{

    Ekle(1);
    Ekle(2);
    Ekle(3);
    Cikar();



    printf("\n");
    Listele();

}




