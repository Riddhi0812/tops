#include <stdio.h>
int main() 
{    
    int i, j;
   
    // Number of rows
    int rows = 5;
    char character = 'A';
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%c ",character);
            character++;
        }
        printf("\n");
    }
}
   
