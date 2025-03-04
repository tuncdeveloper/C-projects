#include<stdio.h>
#include<stdlib.h>
// FERHAT  TUNÇ  220201070
void kosegen(int n , int matris[][n]){

    printf("\n\ngirilen matrisin kose degerleri\n\n");
    int i,j;
    int kose[n];
	int d=0;

	for(i=0;i<n;i++){


		for(j=0;j<n;j++){

		if((i==j || n==i+j+1) && ((i==j)!=(n==i+j+1)) ){

			kose[d]=matris[i][j];
			d++;
		}

	}
}
		printf("\n");

		for(i=0;i<d;i++){
			printf("%d ",kose[i]);
		}

	int carpim=1 ;
	printf("\n\nkosegenlerin carpimim : ");
	for(i=0;i<d;i++){

		carpim=carpim*kose[i];
	}
	printf("%d",carpim);


}
void yenimatris(int n , int matris[][n]){

    int i,j;
	int kose[100];
    int carpim;

	printf("\n\nmatrisin yeni hali\n\n");



	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			if(matris[i][j]<=carpim){

				matris[i][j]=carpim-matris[i][j];
				printf(" %d ",matris[i][j]);
			}

			else{


				printf(" %d ",matris[i][j]);
			}
		}

		printf("\n");
	}




}

void tekcift(int n , int matris[][n]){

    int i,j;


	int tek = 0;
	int cift = 0;

	printf("\n\n");
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			if(matris[i][j]%2!=0){

				tek++;

			}

			else{

				cift++;
			}

		}

	}



	printf("tek sayilarin sayisi : %d\n",tek);
	printf("cift sayilarin sayisi : %d\n\n",cift);


}

int main(){

	int n ;
	int i,j;




	printf("matris boyutuna giriniz : ");scanf("%d",&n);

while(n<2){


	printf("hatali giris matris boyutuna giriniz : ");scanf("%d",&n);


}
	int matris[n][n];

	printf("matris elemanlarina giriniz : \n");
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			scanf("%d",&matris[i][j]);
		}
	}

	printf("\n\nmatrisin baslangic hali : \n\n");
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

		printf(" %d ",matris[i][j]);
		}
		printf("\n");
	}

	kosegen(n,matris);
    yenimatris(n,matris);
    tekcift(n,matris);


	return 0;
}

