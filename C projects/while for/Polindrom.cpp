#include<stdio.h>

int main(){ 
    int sayi, ters=0, temp, rem; 
    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);
    
    temp = sayi;
    while(temp>0)
    {
        rem = temp%10;
        ters = (ters*10)+rem;
        temp = temp/10;
    }
    if(ters == sayi)
        printf("Palindromdur");
    else
        printf("Palindrom degildir.");
}

//		sayi	temp	rem		ters
//		123		123		3		3	
//				12		2		32
//				1		1		321
//
//

	
