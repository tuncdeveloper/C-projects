#include<stdio.h>
#include<stdlib.h>
int main(){
			// 4 basamakli en büyük bol(kendisi hariç bölenlerin toplamý kendisinden büyük olan) sayisi bulma .
	
	int x,y=0,i,j,sayac,enb=1;
	
	for(i=1000;i<=9999;i++)
	{
		y=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				y=y+j;
			}
	
		}
		
		if(y>=i)
		{
			if(i%2!=0)
			{
				if(i>=enb)
				{	
					enb=i;
				}
			}
		}
	}
		
		printf("en bol sayi : %d",enb);
	
	return 0;
}
