#include <stdio.h>
#include<stdlib.h>
int karakter_sayisi(const char *s) {


	int i;

	for (i = 0 ; s[i] != '\0' ; i++) {
	/* islem yapmadan say */
	}


	return i;

}

int string_ara(const char *s, const char * aranan) {

	int i, j;
	
	int s_n = karakter_sayisi(s);
	int aranan_n = karakter_sayisi(aranan);
	
	for (i = 0 ; i <= s_n-aranan_n ; i++){
		
		for (j = 0 ; j < aranan_n ; j++){
			
			if (s[i+j] != aranan[j])
				break;
		
		}
		// eger j == aranan_n olduysa: j dongusu bitmis ve aranan_n tanesi aynidir
	
	
		if (j == aranan_n)
		return 1; // return var
	
	}
	
	
	
	return 0;

}

int main() {
	
	char cumle[100];
	char aranan[20];
	printf("bir cumle girin: ");

	fgets(cumle, 100, stdin); // gets yerine bu sekilde kullanabiliriz
	// gets(cumle);
	
	printf("aranan kelime: ");
	scanf("%20s", aranan);
	
	
	printf("\n\ncumlenin uzunlugu: %d\n", karakter_sayisi(cumle));
	printf("aranan kelimenin uzunlugu: %d\n", karakter_sayisi(aranan));
	
	
	int var = string_ara(cumle, aranan);
	
	if (var == 0){
		printf("aranan kelime cumlede yok\n");
	}
	
	else{
		
		printf("aranan kelime cumlede var\n");
	}
		return 0;
	
	
}
