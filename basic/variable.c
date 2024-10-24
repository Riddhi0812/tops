#include<stdio.h>
struct mystruct
{
	int a[4];
	int i;
}
s1; 
main()
{
	for(s1.i=0;s1.i<4;s1.i++)
	{
		printf("Enter Number 1 : ");
		scanf("%d",&s1.a[s1.i]);
	}
	for(s1.i=0;s1.i<4;s1.i++)
	{
		printf("\nElement are : %d",s1.a[s1.i]);
	}
	
}
