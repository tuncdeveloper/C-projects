#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100
int main(){
	
	char str[100], ters[100];
	int uzunluk, i, indeks, kelimeBas, kelimeSon;
	
	printf("Cumle giriniz: ");
	gets(str);
	
	uzunluk = strlen(str);
	indeks =0;
	
	kelimeBas = uzunluk -1;
	kelimeSon = uzunluk -1;
	
	
	while(kelimeBas > 0){
		
		if(str[kelimeBas]==' '){
			
			i= kelimeBas +1;
			
			while(i<=kelimeSon){
				
				ters[indeks] = str[i];
				i++;
				indeks++;
			}
		
			ters[indeks++]=' ';
			kelimeSon=kelimeBas -1;
		
		}	
		
		kelimeBas--;
	}
		
		for(i=0;i<=kelimeSon;i++){
			
			ters[indeks]= str[i];
			indeks++;
		
		}
	
		ters[indeks] = '\0';
		printf("Orjinal cumle: \n%s\n\n",str);
		printf("Kelimesel terslenmis cumle: \n%s",ters);	
	
	return 0;
}
