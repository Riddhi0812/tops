#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int l = 0;
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    printf("\n\nSeparate the individual characters from a string :\n"); 
    while (str[l] != '\0') {
        printf("%c  ", str[l]); 
        l++; 
    }

    printf("\n");
	
	return 0; 
}
