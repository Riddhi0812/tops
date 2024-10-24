#include <stdio.h>

long CalFct(int);  
main()
{
 int Num; 
 long Fact = 1;
 
 printf("\n Please Enter any  \n");
 scanf("%d", &Num);

 Fact = CalFct(Num);

 printf("\nFactorial of %d = %d\n", Num, Fact);
 
 return 0;
}

long CalFct(int Num)
{ 
  if (Num == 0 || Num == 1)  
    return 1;
  
  else
    return Num * CalFct(Num -1);
}
