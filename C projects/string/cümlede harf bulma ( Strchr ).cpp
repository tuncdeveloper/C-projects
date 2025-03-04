#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    int count = 0;
    char *ptr;

    printf("Bir cumle giriniz: ");
    fgets(sentence, 100, stdin);

    ptr = sentence;

    while (ptr != NULL) {
        
		ptr = strchr(ptr, 'a');
        
		if (ptr != NULL) {
            count++;
            ptr++;
        }
    }

    printf("Cumlede %d tane 'a' harfi vardir.\n", count);

    return 0;
}

