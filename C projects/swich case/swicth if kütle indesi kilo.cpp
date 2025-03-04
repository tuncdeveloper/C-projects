#include<stdio.h>
int main(){
	// 
	int x;
	float b,k,m,l,n,a,c,t;
	
	printf("cinsiyete , kilo , boya gore vucut kitle indeksi ogreniniz\n\n");
	printf("1-erkek\n2-kadin\n\n");	
	scanf("%d",&x);
	
	
	switch(x){
		
		case 1:	printf("boyunuzu metre cinsinden ve kilonuza kilogram cinsinden girin =\n"); 
				printf("boy = ",l);scanf("%f",&l);
				printf("kilo = ",n);scanf("%f",&n);		
		
				m=(n)/(l*l);
				
				
				if(m<20.7)
					{
						printf("%.1f\n",m);
						printf("cok zayifsin saglik riskli");
					}		
				else if(20.7<=m&&m<26.4)
					{
						printf("%.1f\n",m);
						printf("normailsiniz rik yok");
					}
				else if(31.2<m)
					{
						printf("%.1f\n",m);
						printf("obezite ciddi derecede riskli");
					}break;
		
		
		
		case 2:	printf("boyunuzu metre cinsinden ve kilonuza kilogram cinsinden girin =\n"); 
				printf("boy = ",a);scanf("%f",&a);
				printf("kilo = ",c);scanf("%f",&c);		
		
				t=(c)/(a*a);
				
				if(t<19.1)
					{
						printf("%.1f\n",t);
						printf("cok zayifsin saglik riskli");
					}		
				else if(19.1<=t&&t<25.8)
					{
						printf("%.1f\n",t);
						printf("normailsiniz rik yok");
					}
				else if(32.3<t)
					{
						printf("%.1f\n",t);	
						printf("obezite ciddi derecede riskli");
					} break;
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
