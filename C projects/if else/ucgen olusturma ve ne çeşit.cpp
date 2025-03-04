#include<stdio.h>
//a b c kenarlarýndan  üçgen oluþturma 
int main(){
	
      int a,b,c,d,e;
      
      printf("ucgenin kenar degerlerine giriniz :\n\n");
      scanf("%d%d%d",&a,&b,&c);
      
      if(a+b>c)
	  {
	  	 if(c>a-b && c>b-a)
		  {
		  	printf("ucgendir\n");
		  	
		  	 if(a==b){printf("ikizkenar üçgendir");
			  }
		  	  
		  }
		  else
		  {
		  	printf("ucgen degil");
		  }
	  }
	  
	  else if(a+c>b)
	  {
	  	if(b>a-c && b>c-a)
		  {
		  	printf("ucgendir");
		  }
		  else{	printf("ucgen degil");
		  }
	  }	
	
      else if(b+c>a)
	  {
	  	if(a>b-c && a>c-b)
		  {
		  	printf("ucgendir");
		  }
		  else{	printf("ucgen degil");
		  }
	  }	
	
	else 
	{
		printf("ucgen degil");
	}
	
	
	
	
	
	
	
	
	return 0;
}


