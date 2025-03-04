#include <stdio.h>
int fonk(char *dizi , char ara){
	
	
	int i=0;
	int bosluk=0;
	while(dizi[i]!='\0'){
		
		if(dizi[i]==ara){
			
			
			bosluk++;
					
			return bosluk+1;
			
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
	
		
		
	printf("\n\ncumlede kelime sayisi : %d",fonk(cumle , ' '));	
		






return 0;
}
