#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
	char dizi[101][1000];
	int i,j,asal=1;
	
	for(i=1;i<=100;i++){
		
		if(i%2==0){
		
			sprintf(dizi[i],"|%3d(Cift)|...><...|%5d|..>>..|%10.3f|",i,i*2,(float)i*2);
		}
		
		else if(i%2==1){
			
			sprintf(dizi[i],"|%3d(Tek) |...//...|%5d|..>>..|%10.2f|",i,i/2,(float)i/2);
		}
		
		for(j=2;j<i;j++){
			
			if(i%j==0){
				
				asal=0;
				break;
			}
		}
		
		if(asal&&i!=1)
		
			sprintf(dizi[i],"|%3d(Asal)|...^^...|%5d|..>>..|%10.4f|",i,i*i,(float)(i*i));
			
			asal=1;
	}
		
	for(i=1;i<=100;i++)
		printf("%s\n",dizi[i]);

	return 0;
}
