#include <stdio.h>

// Veri al fonksiyonu, operatör ve operandý girdi olarak alýr
void veri_al(char *operator, float *operand) {
    printf("Operator ve operand giriniz (orn: + 4.5): ");
    scanf(" %c %f", operator, operand);
}

// Ýþlem yap fonksiyonu, depo deðiþkeninin deðerini günceller ve sonucu döndürür
float islem_yap(float depo, char operator, float operand) {
    switch (operator) {
        case '+':
            depo += operand;
            break;
        case '-':
            depo -= operand;
            break;
        case '*':
            depo *= operand;
            break;
        case '/':
            depo /= operand;
            break;
        default:
            printf("Hatali operator!\n");
            break;
    }
    return depo;
}

int main() {
    float depo = 0.0;
    char operator;
    float operand;

    // Sonsuz döngü, programdan q girilene kadar devam eder
    while (1) {
        veri_al(&operator, &operand);
        if (operator == 'q') {
            break;
        }
        depo = islem_yap(depo, operator, operand);
        printf("Sonuc: %f\n", depo);
    }

    return 0;
}

