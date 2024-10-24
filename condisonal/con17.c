//Write a C program to check whether a triangle can be formed with the given values for the angles
#include<stdio.h>
int main()
{
  float anglea,angleb,anglec,sum;
  printf("Input the three Angles:\n");
  scanf("%f%f%f",&anglea,&angleb,&anglec);
  sum=anglea+angleb+anglec;
  if(sum==180)
  printf("Triangle is Formed\n");
  else
  printf("Triangle is not Formed\n");
}
