#include<stdio.h>
struct Mystruct
{
	int a,b;

}
s1;
main()
{
	//struct mystruct s1;

	printf("Enter number 1 : ");
	scanf("%d",&s1.a);
	printf("Enter number 2 : ");
	scanf("%d",&s1.b);
	printf ("Number 1 : %d",s1.a);
	printf("\nNumber 2 : %d",s1.b);
}
