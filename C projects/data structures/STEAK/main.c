#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};

struct node *ilk=NULL, *son=NULL;

void Push(int a)
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
    }
}

void Pop()
{
    if(ilk!=NULL)
    {
        struct node *sil=son,*once=ilk;
        while(once->next!=sil && once->next!=NULL)

        once=once->next;
        once->next=NULL;
        son=once;

        if(ilk==sil)
            ilk=NULL;

        free(sil);
    }
    else
    printf("yýðýn boþ");

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

    Push(1);
    Push(5);
    Push(6);
    Pop();

    printf("\n");
    Listele();

}
