#include <stdio.h>
#include <math.h>

struct cember {
    float x;
    float y;
    float r;
};

void tegetyap(struct cember *a, struct cember *b) {
    
	if (a->r > b->r) {
        b->x = a->x;
        b->y = a->r + b->r + a->y;
    }
	
	 else if (a->r < b->r) {
        a->x = b->x;
        a->y = b->r + a->r + b->y;
    }
}

int main() {
    struct cember a, b;

    printf("1. cemberin koordinatlarina ve yaricap degerine sirasiyla giriniz : ");
    scanf("%f %f %f", &a.x, &a.y, &a.r);
    printf("2. cemberin koordinatlarina ve yaricap degerine sirasiyla giriniz : ");
    scanf("%f %f %f", &b.x, &b.y, &b.r);

    printf("\n1. cember koordinatlari = (%.2f,%.2f) ve yaricapi : %.2f", a.x, a.y, a.r);
    printf("\n2. cember koordinatlari = (%.2f,%.2f) ve yaricapi : %.2f\n", b.x, b.y, b.r);

    tegetyap(&a, &b);

    printf("\nkucuk teget olduktan sonra : \n\n");

    printf("\n1. cember koordinatlari = (%.2f,%.2f) ve yaricapi : %.2f", a.x, a.y, a.r);
    printf("\n2. cember koordinatlari = (%.2f,%.2f) ve yaricapi : %.2f\n", b.x, b.y, b.r);

    return 0;
}

