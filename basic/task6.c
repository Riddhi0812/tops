#include<stdio.h>
main()
{
	int base,hight,area;

	printf("Enter of base of triangle:");
	scanf("\n%d",&base);
	printf("Enter of hight of triangle:");
	scanf("\n%d",&hight);
	area=base*hight/2;
	printf("\narea of triangle:%d\n",area);
}
