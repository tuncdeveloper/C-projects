#include <stdio.h>

void towers(int, char, char, char);

int main()
{
    int num;

    printf("disk sayisi : ");
    scanf("%d", &num);
    printf("Hanoi kulesi adimlari:\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char baslangic, char hedef, char bitis)
{
    if (num == 1)
    {
        printf("\nDisk 1 %c pladakan  %c plakaya tasi", baslangic, hedef);
        return;
    }
    towers(num - 1, baslangic, bitis, hedef);
    printf("\nDisk %d %c plakadan  %c plakaya tasi", num, baslangic, hedef);
    towers(num - 1, bitis, hedef, baslangic);
}
