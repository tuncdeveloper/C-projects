#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
    char zaman1[50];
    char zaman2[50];
    
    
	int x,y,z ;
	int a,b,c ;
	
    
    printf("1. zamani giriniz (ss : dd : ss): ");
 	
	fgets(zaman1, 50, stdin);
	sscanf(zaman1, "%d : %d : %d", &x , &y , &z);
	zaman1[strcspn(zaman1, "\n")] = 0;
	
	


	printf("2. zamani giriniz (ss : dd : ss): ");

	fgets(zaman2, 50, stdin);
	sscanf(zaman2, "%d : %d : %d", &a , &b , &c);
    zaman2[strcspn(zaman2, "\n")] = 0; 
	


 	int	s1 = x*3600 + y*60 + z ;
	int s2 = a*3600 + b*60 + c ;
	
	int sonuc=abs(s1-s2);
    
    printf("\n\nBirinci zaman : %s\n",zaman1);
    printf("\nikinci zaman : %s\n",zaman2);


	printf("\nSaniye cinsinden zaman farki : %d",sonuc);
    return 0;
}

