#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int DecimalNumericalPlace(char roman_np_value)
    {
        switch(roman_np_value)
        {
            case 'M':
            return 1000;
            break;

             case 'D':
            return 500;
            break;

            case 'C':
            return 100;
            break;

             case 'L':
            return 50;
            break;

             case 'X':
            return 10;
            break;

             case 'V':
            return 5;
            break;

            case 'I':
            return 1;
            break;
            default :
            return -1;
        }
    }
int romanToInt(char * s)
{
    int len=strlen(s);
    int sum=0;

   for(int i=0;s[i]!='\0';i++){
 
       	if(DecimalNumericalPlace(s[i]) < DecimalNumericalPlace(s[i+1])){
    
	 	  	sum = sum-DecimalNumericalPlace(s[i]);
  	 	
		}
   
  		else{

   		  sum = sum + DecimalNumericalPlace(s[i]);
   	
	   	}
   }
   
    return sum;

}

int main(){

    char roman_num[100];
    printf("Enter a roman numeral: ");
    scanf("%s", roman_num);
    printf("%s in decimal is %d\n", roman_num, romanToInt(roman_num));

    return 0;
}

