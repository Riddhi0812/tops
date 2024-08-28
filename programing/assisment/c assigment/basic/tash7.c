//Find area of Rectangle Formula : A=wl 
#include <stdio.h>

int main() {
   float l, w, area;

   printf("Enter the length of the rectangle: ");
   scanf("%f", &l);

   printf("Enter the width of the rectangle: ");
   scanf("%f", &w);

   area = l * w;

   printf("The area of the rectangle is: %f\n", area);

   return 0;
}
