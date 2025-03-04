#include <stdio.h>
int fonk(char *dizi , char ara){
	
	
	int i=0;
	
	while(dizi[i]!='\0'){
		
		if(dizi[i]==ara){
					
			return i;
		}
		i++;
	}
	
	
	return 0;
}
int karakter_sayisi(const char *s) {
	
	int i;
	
	for (i = 0 ; s[i] != '\0' ; i++) {
	
	/* islem yapmadan say */
	}

	return i-1;

}

int main() {
	
	char cumle[100];
	
	printf("bir cumle girin: ");
	
	fgets(cumle, 100, stdin); // gets yerine bu sekilde kullanabiliriz
	// gets(cumle);

	
	printf("harf sayisi : %d",karakter_sayisi(cumle));
	printf("\n\n");
	
		
	int sonuc = fonk(cumle, 'a');
	
	
	if (sonuc == 0)
	printf("cumlede a karakteri yok\n");
	
	else
	printf("cumlede a karakteri %d. indexte var\n", sonuc+1);






return 0;
}
