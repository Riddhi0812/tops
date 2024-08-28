//WAP to accept 5 numbers from user and display all numbers 
#include<stdio.h>
int main()
{
 int i=0, number[5];
 for(i=0; i<5; i++) 
 {
  printf("Enter your Number[%d]:",i);
  scanf("%d",&number[i]);
 }
 //Logic to print number array.
 for(i=0; i<5; i++) // This loop tracks array index 
 {
  printf("Number[%d]:%d \n", i, number[i]);
 }
}

