#include<stdio.h>
#include<stdlib.h>

// FERHAT TUNÇ  220201070

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int is_pascal(int num, int* rows) {
    if (num <= 0) { // Sayý negatif veya sýfýra eþitse hemen uygun deðil.
        return 0;
    }
    int toplam = 0, n = 1;
    while (toplam < num) { // Toplam, sayýnýn kaçýncý satýra denk geldiðini belirler.
        toplam += n;
        n++;
    }
    if (toplam == num) { // Toplam, sayýnýn kaçýncý satýra denk geldiðine eþitse, sayý uygun.
        *rows = n - 1;
        return 1;
    } else { // Aksi takdirde uygun deðil.
        return 0;
    }
}

void print_pascal(int rows) {
    int pascal[rows][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("x ");
        }
        printf("\n");
    }
}

int main() {
    int num, rows;
    char choice = 'y';
    while (choice == 'y') {
        printf("Lutfen bir deger giriniz : ");
        scanf("%d", &num);
        if (is_pascal(num, &rows)) {
            printf("\n%d degeri pascal ucgeni cizmeye uygundur \n", num);
            printf("Pascal ucgeninde %d satir var:\n", rows);
            printf("\nCizdirilen ucgen\n\n");
            
        
            print_pascal(rows);
        } else {
            printf("%d degeri Pascal ucgeni cizmeye uygun degildir.\n", num);
        }
        printf("\nDevam icin 'y' cikis icin 'n'? (Y/N): ");
        scanf(" %c", &choice);
    }
    return 0;
}

