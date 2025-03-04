#include "stdio.h"


void paraustuAyristir(int urunFiyati,int verilenPara){
    int paraUstu = verilenPara - urunFiyati;
    printf("Para ustu %d\n",paraUstu);
    int ikiyuzluk = paraUstu/200;
    int yuzluk = paraUstu%200 / 100;
    int ellilik = paraUstu%100 / 50;
    int yirmilik = paraUstu %50 / 20;
    int onluk = paraUstu%20 /10;
    int beslik = paraUstu%10/5;
    int birlik = paraUstu%5;
    printf("Banknot sayilari\n");
    printf("%d adet 200\n",ikiyuzluk);
    printf("%d adet 100\n",yuzluk);
    printf("%d adet 50\n",ellilik);
    printf("%d adet 20\n",yirmilik);
    printf("%d adet 10\n",onluk);
    printf("%d adet 5\n",beslik);
    printf("%d adet 1\n",birlik);



}


int main(){
    int urunFiyati,verilenPara;
    printf("Urunun fiyatini giriniz:");
    scanf("%d",&urunFiyati);
    printf("Verilen parayi giriniz:");
    scanf("%d",&verilenPara);

    paraustuAyristir(urunFiyati,verilenPara);


    return 0;
}
