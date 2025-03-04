#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void fonk( char*tarih , char*day , char* month , char* year){
	
    
    // günü ayýrmak için strtok fonksiyonu kullanýlýr
    strcpy(day, strtok(tarih, "/"));
    strcpy(month, strtok(NULL, "/"));
    strcpy(year, strtok(NULL, "/"));
    
    // ayý kelimeye dönüþtürmek için switch case kullanýlýr
    switch (atoi(month)) {
        case 1:
            strcpy(month, "ocak");
            break;
        case 2:
            strcpy(month, "subat");
            break;
        case 3:
            strcpy(month, "mart");
            break;
        case 4:
            strcpy(month, "nisan");
            break;
        case 5:
            strcpy(month, "mayis");
            break;
        case 6:
            strcpy(month, "haziran");
            break;
        case 7:
            strcpy(month, "temmuz");
            break;
        case 8:
            strcpy(month, "agustos");
            break;
        case 9:
            strcpy(month, "eylül");
            break;
        case 10:
            strcpy(month, "ekim");
            break;
        case 11:
            strcpy(month, "kasim");
            break;
        case 12:
            strcpy(month, "aralik");
            break;
        default:
            printf("Hatalý ay deðeri: %s", month);
            
    }
    
    // ekrana tarihi yazdýr
    printf("%s %s %s", day, month, year);
}

int main(){
    
    char tarih[100];
    char day[3], month[10], year[5];
    
    printf("Kisa tarih dizgisine giriniz : ");
    fgets(tarih,100,stdin);
    tarih[strcspn(tarih,"\n")]='\0';
    
    fonk(tarih,day,month,year);
    
    return 0;
}
