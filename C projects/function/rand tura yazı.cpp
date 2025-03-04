#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	srand(time(NULL));
	
	int x,i,a,y;
	int sayac=0,top=0;
	printf("kac kere para atilsin : ");scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		printf("bozuk at : ");
		
		a=1+rand()%2;
		switch(a)
		{
			case 1 : printf("yazi\n");
					top=top+1;
					break;
			case 2 : printf("tura\n");
					sayac=sayac+1;
					break;				
		}
		
	}

			printf("\ntoplam yazi : %d\n",top);
			printf("\ntoplam tura : %d\n",sayac);


	return 0;
}
