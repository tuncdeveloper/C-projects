#include<stdio.h>
int main(){
	


	int sayi , enbuyuk,enkucuk;
	
	printf("gir =(sonlamak i�in negatif)");
	scanf("%d",&sayi);

	enbuyuk=sayi;
	enkucuk=sayi;
	
	while(sayi>=0)
	{
		if(sayi>enbuyuk)
		{
			enbuyuk=sayi;
		}
		if(sayi<enkucuk)
		{
			enkucuk=sayi;
		}
		
		printf("gir=(sonlamak i�in negatif)");
		scanf("%d",sayi);
		
	}

	printf("\n");
	printf("enbuyuk= %d",enbuyuk);
	printf("enkucuk= %d",enkucuk);






	
	
	
	
	
	return 0;
}
