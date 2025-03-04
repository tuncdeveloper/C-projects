#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\n");
	printf("\t3x3 matrisi ve transpozesi");
	
	
	int satir , sutun,simetrik=1;
	
	int matris[3][3],trans[3][3];
	
	printf("\n\nmatris degerlerine giriniz : \n\n");
	
	
	for(satir=0;satir<3;satir++){
		for(sutun=0;sutun<3;sutun++){
			
			printf(" matris[%d][%d] : ",satir+1,sutun+1);
			scanf("%d",&matris[satir][sutun]);
			trans[sutun][satir]=matris[satir][sutun];
		}
	}
	
	
	printf("\t\nmatris\n");
	for(satir=0;satir<3;satir++){
		for(sutun=0;sutun<3;sutun++){
			
			printf(" %d ",matris[satir][sutun]);
		
		}
		printf("\t\t");
		
		
		for(sutun=0;sutun<3;sutun++){
			
			printf(" %d ",trans[satir][sutun]);
		
		}
		printf("\n");		
	
		for(sutun=0;sutun<3;sutun++){
			
		if(trans[satir][sutun]!=matris[satir][sutun])
			simetrik=0;
			break;
		}
		
	}
	
	if(simetrik==1)
		printf("\nmatris simetriktir");
	
	else
		printf("\nmatris simetrik degildir");
	return 0;
}
