#include <stdio.h>
int main()
{
    char str[100]; /* Declares a string of size 100 */
    int l=0;
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
	   l=strlen(str);
	   printf("\n\nPrint individual characters of string in reverse order :\n");
       for(str[l]='\0';l>=0;l--)
        {
          printf("%c  ", str[l]);
        }
    printf("\n");
	
	return 0; 
}
