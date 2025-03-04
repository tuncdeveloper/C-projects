#include<stdio.h>
int main(){
	
	int y,m,i,a,b,c;
	
	char x ;
	
	printf("maymunun cinsiyetine giriniz(Erkek E/e , Disi D/d): \n");scanf("%c",&x);
	
		printf("maymun kafese kac defa girdi : ");scanf("%d",&y);
		
		
	switch(x){
		
		
		
		case 'd' :  for(m=1;m<=y;m++)
			{
			
					
				if(m<5)
				{
					a=m*(m+1)/2.0;
					
					printf("%d. girisinde toplamda %d yemistir\n",m,a);
					
				}
				
				
				if(m>=5)
				{
					
					
					a=(a-m)/2+1+a;
					
					printf("%d. girisinde toplamda %d yemistir\n",m,a);
					
					
					
				}
			
						} break ;
			
		
		
	
		case 'e' :	
						for(m=1;m<=y;m++)
			{
			
					
				if(m<5)
				{
					a=m*(m+1)/2.0;
					
					printf("%d. girisinde toplamda %d yemistir\n",m,2*a);
					
				}
				
				
				if(m>=5)
				{
					
					
					a=(a-m)/2+1+a;
					
					printf("%d. girisinde toplamda %d yemistir\n",m,2*a);
					
					
					
				}
				
				
				
				
					
			
			
			
				
			
			
			
			
			
			
			
		} break ;
			
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
