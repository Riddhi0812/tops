#include <stdio.h>
struct employee{
    char    name[30];
    int     empId;
    float   salary;
    int		age;
};
 
int main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("Name ?:");          
	gets(emp.name);
    printf("ID ?:");            
	scanf("%d",&emp.empId);
    printf("Salary ?:");        
	scanf("%f",&emp.salary);
	printf("Age ?:");        
	scanf("%d",&emp.Age);
	
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    printf("Id: %d"     ,emp.Age);
    return 0;
}

