#include<stdio.h>
int main(){
	
	
	int x,j,i,k=0,d;
	int sayi;
	printf("kac tane olmasina gir : ");scanf("%d",&sayi);
	int a[sayi],b[sayi];
	int c[sayi];
	
	
	printf("a dizisi : \n");
	for(i=0;i<sayi;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("b dizisi : \n");
	for(i=0;i<sayi;i++)
	{
		scanf("%d",&b[i]);
	}
	
	
	for(i=0;i<sayi;i++){
		
		for(j=0;j<sayi;j++){
			
			if(a[i]==b[j]){
				c[k]=b[j];
				k++;
			}
		}
	}
	
	printf("\nortak elemanlar : \n\n");
	for(d=0;d<k;d++){
		
		printf("%d ",c[d]);
	}	
	
	return 0;
}
