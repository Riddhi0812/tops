//Write a program in C to read any Month Number in integer and display the 
#include<stdio.h>
main()
{

  int days[]={30,31};
  int i,month;
  cout<<"enter the month in integer\n";
  cin>>month;
  if (month == 2)
  {
    cout<<"28 days";
  }
  else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8))
  {
    cout<<days[0];
  }
  else
  {
    cout<<days[1];
  }
}
