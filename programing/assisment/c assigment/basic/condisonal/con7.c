// Accept marks from user and check pass or fail 
#include <stdio.h>
main()
{
int Per;
	printf("Enter your marks : ");
	scanf("%d",&Per);
	if(Per >= 40)
		printf("\nResult is pass");
	else
		printf("\nResult is fail");
}
