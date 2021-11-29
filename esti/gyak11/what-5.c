#include<stdio.h>
int main()
{
	struct employee 
	{
		int empid[5];
		int salary;
		struct employee *s;
	} emp;
    
    printf("%d %d", sizeof(struct employee)
                  , sizeof(emp.empid));
    
    return 0;
}