#include<stdio.h>
struct employee
{
int id;
char name[30];
float salary;
};
int main()
{
struct employee emp;
printf("Enter Employee id:");
scanf("%d",&emp.id);
printf("Enter Employee name:");
scanf("%s",emp.name);
printf("Enter Employee salary:");
scanf("%f",&emp.salary);
printf("Employee details");
printf("id:%d",emp.id);
printf("name:%s",emp.name);
printf("salary:%.2f",emp.salary);
return 0;
}
                                                                                          
