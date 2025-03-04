#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


void fonk(int x){
	
	if(x>3)
	{		
		fonk(x-1);
		printf("%d",x);
		
	}																																																						
}																								
																							
int main(){																					
																					
	int sayi=7;
	
	fonk(sayi);

	
	return 0;
}
