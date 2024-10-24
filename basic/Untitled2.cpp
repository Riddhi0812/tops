#include <stdio.h>
int main() {
   int i, j, rows;
    char input, alphabet = 'A';
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = A; i <= rows; ++i)
    {
      for (j = A; j <= i; ++j) 
	  {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
