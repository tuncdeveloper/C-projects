#include <stdio.h>
#include <string.h>

struct musteri {
   char ad[50];
   int borc;
   int no;
};

void sirala(struct musteri *a, int n) {
    int i,j;
    struct musteri temp;
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i].borc>a[j].borc) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\n\nen azdan coga dogru \n\n");

    for(i=0;i<3;i++){
    	printf("%s borcu %d\n",a[i].ad,a[i].borc);
	}

}

int main() {
    struct musteri a1 = {"Ahmet Terk", 2541};
    struct musteri a2 = {"oya Gerim", 1425};
    struct musteri a3 = {"Selim Demir", 4568};

    struct musteri dizi[3] = {a1, a2, a3};

	printf("eski siralama : \n\n");
	printf("%s %2d\n",a1.ad,a1.borc);
	printf("%s %2d\n",a2.ad,a2.borc);
	printf("%s %2d",a3.ad,a3.borc);


	printf("\n\nguncellendikten sonraki siralama : \n");
    sirala(dizi, 3);


    printf("\nBorcu en az olan: %s\n", dizi[0].ad);

    return 0;
}

