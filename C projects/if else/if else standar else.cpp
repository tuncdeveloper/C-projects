#include<stdio.h>
int main(){
	
	// en basarili ders ve standart notu kaça
	float a,b,x,y,k,l;
	float g,t,h,z,c,m;
	
	printf(" matematik: basari notu , sinif ortalamasi , sapmaya giriniz =\n");
	scanf("%d %d %d",&x,&y,&z);
	printf("turkce : basari notu , sinif ortalamasi , sapmaya giriniz =\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("fen : basari notu , sinif ortalamasi , sapmaya giriniz =\n");
	scanf("%d %d %d",&k,&l,&m);
	
	g=(x-y)/(z);
	t=(a-b)/(c);
	h=(k-l)/(m);
	
	if(g>t && t>h)
	{
		printf("en basarili ders MATEMATÝK\n");
		printf("%.2f",g);
	}
	
	else if(t>g&&t>h)
	{
		printf("en basarili ders TURKCE\n");
		printf("%.2f",t);
	}
	
	else if(h>g&&h>t)
	{
		printf("en basarili ders FEN\n");
		printf("%.2f",h);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
