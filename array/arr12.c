#include<stdio.h>

int main()
{
	char name[5][20]; 
	int i;
	for(i=0; i<5; i++){
		printf("Enter name %d:", i+1);
		gets(name[i]);
	}
	printf("List of student names stored: \n");
	for(i=0; i<5; i++){
		printf("%s \n", name[i]);
	}
	return 0;
}

