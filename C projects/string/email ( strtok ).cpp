#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    printf("Lutfen e-posta adresinizi girin: ");
    scanf("%s", email);
    
    int choice;
    printf("Yapmak istediginiz islemi secin:\n");
    printf("1 - Kullanici adini yazdir\n");
    printf("2 - Domain adini yazdir\n");
    printf("3 - Kok domain adini yazdir\n");
    scanf("%d", &choice);
    
    char *username = strtok(email, "@");
    char *domain = strtok(NULL, "@");
    char *root_domain = strtok(domain, ".");


    while (strtok(NULL, ".") != NULL) {
        root_domain = strtok(NULL, ".");
    }
    
    switch (choice) {
        case 1:
            printf("Kullanici adi: %s\n", username);
            break;
        case 2:
            printf("Domain adi: %s\n", domain);
            break;
        case 3:
            printf("Kok domain adi: %s\n", root_domain);
            break;
        default:
            printf("Gecersiz secim\n");
            break;
    }
    
    return 0;
}

