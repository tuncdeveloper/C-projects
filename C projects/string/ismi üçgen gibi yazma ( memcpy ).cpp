#include <stdio.h>
#include <string.h>
#include <ctype.h>
void fonk(char *sentence){
	
	
	
	char dizgi[100];
	int i,j=0;
	dizgi[strcspn(dizgi,"\n")]='\0';
	
	printf("\n");
	for(i = strlen(sentence); i >= 0; i--){
		
		
		memcpy(dizgi,sentence,i);
		
		dizgi[i]='\0';
		
		printf("%s \n",dizgi);
	}
		
}
int main() {
   
    char sentence[100];
   	
	printf("isim giriniz  : ");
    
	fgets(sentence,100,stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
 
 	fonk(sentence);
	
    return 0;
}
