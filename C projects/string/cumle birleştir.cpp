#include <stdio.h>
#include<stdlib.h>
int stringuzunluk(char *s) {
	
	int i;
	for (i = 0 ; s[i] != '\0' ; i++) {
	/* islem yapmadan say */
	}
	return i;
}
void stringekle(char *s1 , char s2[]){
	
	int i;
	
	int boy1 = stringuzunluk(s1);
	int boy2 = stringuzunluk(s2);
	s1[boy1-1]=' ';	
	for(i=0; i<boy2 ;i++){
		
		s1[boy1+i]=s2[i];
		
	}
	
	
}
int main() {
	
	char cumle_1[100];
	char cumle_2[50];

	printf("bir cumle girin : ");
	fgets(cumle_1, 50, stdin);
	
	printf("eklenecek cumle girin : ");
	fgets(cumle_2, 50, stdin);
	
	
	// cumle_1'in sonuna cumle_2'yi ekle
	
	
	stringekle(cumle_1, cumle_2);
	printf("ikinci cumle, birinci cumleye eklendi.\n\n");
	
	
	puts(cumle_1);




return 0;
}
