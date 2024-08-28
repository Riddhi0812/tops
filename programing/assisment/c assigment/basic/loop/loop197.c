// C program to print perfect square number pattern
#include <stdio.h>
main()
{
    int i, j, N;
    int a[10][10];
    int left, top;

    left = 0;
    top  = 10 - 1;
    N    = 1;

    for(i=1; i<=10/2; i++, left++, top--)
    {
        // Fill from left to right
        for(j=left; j<=top; j++, N++)
        {
            a[left][j] = N;
        }

        // Fill from top to down
        for(j=left+1; j<=top; j++, N++)
        {
            a[j][top] = N;
        }

        // Fill from right to left
        for(j=top-1; j>=left; j--, N++)
        {
            a[top][j] = N;
        }

        // Fill from down to top
        for(j=top-1; j>=left+1; j--, N++)
        {
            a[j][left] = N;
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%-5d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
