#include <stdio.h>
int main()
{
	int a=0,x,i,y,n,k;
	
	float z=1, j=0,m=0,h=0;
	
	printf("x degerine gir : ");scanf("%d",&x);
	printf("n degerine gir : ");scanf("%d",&n);
		
		for(i=1;i<=n;i++)
		{
			z=x*z;
			
			j=j+1;
			
			m=z/j;
						
			k=j;
			
			if(k%2!=0)
			{
				m=-m;
			}
			
			h=m+h ;
			
			printf("\nx:%.0f ve n:%.0f == %.2f\n",z,j,m);
			
		}
			h=h+1;
			
			printf("\ntoplam sonuc : %.2f",h);
		
	
		
	return 0 ;	
}
