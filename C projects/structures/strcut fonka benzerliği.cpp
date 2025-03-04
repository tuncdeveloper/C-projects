#include <stdio.h>
#include <math.h>

struct cember {
    int x;
    int y;
    float r;
};

struct cember yutanibul(struct cember a, struct cember b) {
 
    struct cember c;
 
    float mesafe;
    float topr;

    mesafe = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    topr = a.r + b.r;

    if (topr >= mesafe) {
        
		if (a.r > b.r) {
           c=a;
        } 
		
		else {
            c=b;
        }
    } 
	
	else {
        c.x = 0;
        c.y = 0;
        c.r = 0;
    }

    return c;
}

int main() {
    struct cember a, b, c;

    printf("1. cemberin koordinatlarina ve yaricap degerine sirasiyla giriniz : ");
    scanf("%d %d %f", &a.x, &a.y, &a.r);
    printf("2. cemberin koordinatlarina ve yaricap degerine sirasiyla giriniz : ");
    scanf("%d %d %f", &b.x, &b.y, &b.r);

    c = yutanibul(a, b);

    if (c.r == 0) {
        printf("Cemberler birbirlerinin disinda veya icinde degiller.\n");
    } 
	
	else {
    
	    printf("Kapsanan cemberin koordinatlari: (%d, %d)\n", c.x, c.y);
        printf("Kapsanan cemberin yaricapi: %f\n", c.r);
    
	}

    return 0;
}

