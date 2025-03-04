#include <stdio.h>
#include <math.h>

struct cember {
    float x1;
    float y1;
    float x2;
    float y2;
};

struct cember merkezeal (struct cember a) {
    
    struct cember b;
    
	b.x1=-(a.x2-a.x1)/2;	
	b.x2=(a.x2-a.x1)/2;	
	
	b.y1=(a.y1-a.y2)/2;	
	b.y2=-(a.y1-a.y2)/2;	


	
	return b;
}



int main() {
    struct cember a, b;

    printf("sol üst x , sol ust y, sag alt x, sag alt y :  ");
    scanf("%f %f %f %f", &a.x1, &a.y1, &a.x2,&a.y2);
    

    printf("\nsol ust icin : %.2f ve %.2f sag alt icin : %.2f ve %.2f", a.x1, a.y1, a.x2,a.y2);
 

   	b = merkezeal(a);
	
    printf("\ndikdortgen merkeze alindiktan sonra : \n\n");

    printf("\ndikdortgen koordinatlari = sol ust : %.2f,%.2f sag alt icin : %.2f,%.2f", b.x1, b.y1, b.x2,b.y2);
    


    return 0;
}

