#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    char s2[100];
    
    printf("Lutfen 1. cumle giriniz: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    
    printf("Lutfen 2. cumle giriniz: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    
    int x, y;
    char dizgi[100];
    
    printf("s1 den kirpma seciniz : ");
    scanf("%d", &x);
    printf("s2 den kirpma seciniz : ");
    scanf("%d", &y);
    
    // s1'in bir kopyasýný oluþturun
    char s1_kopya[100];
    strcpy(s1_kopya, s1);
    
    // s1'in belirtilen indekslerden sonrasýný kesin
    s1[x-1] = '\0';
    
    // s2'nin belirtilen indekslerden sonrasýný kesin
    s2[y] = '\0';
    
    // dizgiyi s1'in kesilmiþ kýsmýyla baþlatýn
    strcpy(dizgi, s1);
    
    // s2'nin kesilmiþ kýsmýný dizgiye ekleyin
    strcat(dizgi, s2);
    printf("%s\n\n", dizgi);
    
    // s1'in belirtilen indekslerden sonrasýný a dizisine kopyalayýn
    char a[100];
    int i;
    
	for (i = 0; i < strlen(s1_kopya) - (x+2); i++) {
       
	    a[i] = s1_kopya[i + (x+2)];
    
	}
    a[i] = '\0';
    
	strcat(dizgi,a);
	printf("%s", dizgi);

    return 0;
}

