// Write a C program to accept two integers and check whether they are equal or not 
#include<stdio.h>
main()
{
  int Number1,Number2;
 printf("Enter the Number1  ");
 scanf("%d",&Number1);
 printf("Enter the Number2  ");
 scanf("%d",&Number2);
 if(Number1==Number2)
  {
    printf("%d and %d are equal",Number1,Number2 );
  }
  else
  {
    printf("numbers are not equal");
  }
}
