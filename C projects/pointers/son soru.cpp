#include <stdio.h>

// Veri al fonksiyonu, operat�r ve operand� girdi olarak al�r
void veri_al(char *operator, float *operand) {
    printf("Operator ve operand giriniz (orn: + 4.5): ");
    scanf(" %c %f", operator, operand);
}

// ��lem yap fonksiyonu, depo de�i�keninin de�erini g�nceller ve sonucu d�nd�r�r
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

    // Sonsuz d�ng�, programdan q girilene kadar devam eder
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

