#include<stdio.h>
int on=0,arka=0,eleman=0;
int dizi[10];

void Ekle(int a)
{
    if(eleman<10)
    {
        dizi[arka]=a;
        arka++;
        eleman++;
        if(arka>9) arka=0;
    }
}
int Cikar()
{
    if(eleman>0)
    {
        int gonder=dizi[on];
        on++;
        if(on>9) on=0;
        eleman--;
        return gonder;
    }
}
void Listele()
{
    int i=on;
    while(i!=arka)
    {
        printf("%d ",dizi[i]);
        i++;
         if(i>9)  i=0;

    }
}
int main()
{
    Ekle(1);
    Ekle(2);
    Ekle(3);
    Ekle(4);
    Ekle(5);
    Ekle(6);
    Ekle(7);
    Ekle(8);
    Ekle(9);
    Cikar();
     Cikar();
      Cikar();
       Cikar();
   Ekle(123);
   Cikar();


    printf("\n");
    Listele();

}
