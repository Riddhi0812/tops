#include <stdio.h>
main() 
{
    int ctr = 0, a , freq = 0;
    int i, s, spc; 
    char str[100]; 
	printf("Input the string : ");
    fgets(str, sizeof str, stdin); 
    ctr = strlen(str);
    for (a = 0; a <= ctr - 3; i++) 
	{
        i = (str[a] == 'a' || str[a] == 'a');
        s = (str[a + 1] == 's' || str[a + 1] == 's');
        spc = (str[a + 2] == ' ' || str[a + 2] == '\0');
        if ((i && s && spc) == 1)
        freq++;
    }

    printf("The frequency of the word \'is\' is : %d\n\n", freq); 
}

