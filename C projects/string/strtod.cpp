#include <stdio.h>
#include <stdlib.h>
int main () {
	
	
	char str[30] = "20.30300 Bu kisim yazidir";
	char *cevilemeyen_kisim;
	double cevrilen_kisim;
	
	
	
	cevrilen_kisim = strtod(str, &cevilemeyen_kisim);
	
	printf("Cevrilen kisim: |%f|\n\n", cevrilen_kisim);
	printf("Cevrilmeyen kisim: |%s|", cevilemeyen_kisim);
	
	
	
	
	return(0);
} 
