#include <stdio.h>

void main()
{
	int num, r, sum = 0, temp; //remainder=r

	printf("Enter number: ");
	scanf("%d", &num);

	/*Armstrong Number in C Using For Loop*/

	for (temp = num; num != 0; num = num / 10)
	{
		r = num % 10;
		sum = sum + (r *r *r);
	}

	if (sum == temp)
		printf("%d\n is an Armstrong number ", temp);
	else
		printf("%d is not an Armstrong number.\n", temp);
	}
