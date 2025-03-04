#include <stdio.h>

void say(int dizi[], int elemanSayisi, int* pozitifSayisi, int* negatifSayisi, int* sifirSayisi){
   
    *pozitifSayisi = 0;
    *negatifSayisi = 0;
    *sifirSayisi = 0;
    for(int i=0; i<elemanSayisi; i++){
        if(dizi[i] > 0){
            (*pozitifSayisi)++;
        }
        else if(dizi[i] < 0){
            (*negatifSayisi)++;
        }
        else{
            (*sifirSayisi)++;
        }
    }
}

int main(){
    int dizi[] = {3, 2, 0, -4, 5, 0, -2};
    int elemanSayisi = 7;
    int pozitifSayisi = 0;
    int negatifSayisi = 0;
    int sifirSayisi = 0;
    say(dizi, elemanSayisi, &pozitifSayisi, &negatifSayisi, &sifirSayisi);
    printf("Pozitif Sayisi: %d\n", pozitifSayisi);
    printf("Negatif Sayisi: %d\n", negatifSayisi);
    printf("Sifir Sayisi: %d\n", sifirSayisi);
    return 0;
}

