#include<stdio.h>  
  
int main()  
{  
    int x, i, temp, donme;  
    printf("kac sayi gir : ");scanf("%d",&x);  
    int a[x];
	
	for(i = 0; i < x; i++)  
        scanf("%d", &a[i]);  
  	
  	printf("kac defa donecegine giriniz : ");  
    scanf("%d", &donme);  
    
    while(donme)  
    {  
        
            temp = a[0];  
            for(i = 0; i < x - 1; i++)  
                a[i] = a[i + 1];  
  
            a[x - 1] = temp;  
  
        donme--;  
    }  
      
    printf("yeni dizi ...\n");  
    for(i = 0; i < x; i++)  
        printf("%d ", a[i]);  
				
    return 0;  
}  
