#include <stdio.h>
 
main()
{
    int eleman,enbuyuk,enkucuk;
    int toplam = 0;
     
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&eleman);
     
    int dizi[eleman];
     
    for(int i = 0; i < eleman; i++)
    {
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
        if(i == 0){
            enkucuk = dizi[i];
            enbuyuk = dizi[i];
        }
        if(dizi[i] > enbuyuk){
            enbuyuk = dizi[i];
        }
        if(dizi[i] < enkucuk){
            enkucuk = dizi[i];
        }
    }
    printf("\n\nDizinin en kucuk degeri = %d\n",enkucuk);
    printf("Dizinin en buyuk degeri = %d",enbuyuk);
}
