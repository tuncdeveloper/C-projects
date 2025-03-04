#include<stdio.h>
#include<stdlib.h>
int main(){
	
	
	FILE *dosya ;
	
	dosya=fopen("C:\\Users\\Lenovo\\Desktop\\Cdeneme.txt","w"); // dosya açma write
	
	
	putc('a',dosya);
	putc('\n',dosya);
	putc('b',dosya);
	
	
	fclose(dosya);
	
	return 0;
}
