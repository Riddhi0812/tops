#include <stdio.h>
main()
{
  int month;
  printf(" Please Enter the Month Number 1 to 12 (Consider 1 = January, and 12 = December) :  ");
  scanf("%d", &month);
  
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
  {
  	printf("\n 31 Days in this Month");  	
  }
  else if ( month == 4 || month == 6 || month == 9 || month == 11 )
  {
  	printf("\n 30 Days in this Month");  	
  }  
  else if ( month == 2 )
  {
  	printf("\n Either 28 or 29 Days in this Month");  	
  } 
  else
    printf("\n Please enter Valid Number between 1 to 12");
  
}
