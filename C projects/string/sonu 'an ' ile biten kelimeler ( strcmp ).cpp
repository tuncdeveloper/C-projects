#include <stdio.h>
#include <string.h>

int main() {
    char words[][100] = {"istanban", "ankara", "londran", "sanfransisco", "madrid"};
    
    int i;
    int n = sizeof(words) / sizeof(words[0]);
    
    for (i = 0; i < n; i++) {
    	
    	
        int len = strlen(words[i]);
        
		if ( strcmp(words[i] + len - 2, "an") == 0){
			
            printf("%s\n", words[i]);
        
		
		}
    }
    
    return 0;
}

