#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_EMPLOYEES 100

struct Employee
{
int id;
char name[50];
float salary;
};

struct Employee*emp[MAX_EMPLOYEES];
int count = 0;
   
void addEmployee()
{
if(count>=MAX_EMPLOYEES)
{
printf("employee list is full!\n");
return;
}
struct Employee*e=(struct Employee*)malloc(sizeof(struct Employee));
printf("enter id:");
scanf("%d",&e->id);
printf("enter name:");
scanf("%s",e->name);
printf("enter salary:");
scanf("%f",&e->salary);
emp[count]=e;
count++;
printf("employee added!\n\n");
}

void displayEmployees()
{
if(count == 0)
{
printf("no employees to show\n\n");
return;
}

printf("\nID\tName\t\tSalary\n");
for(int i=0;i<count;i++)
{
printf("%d\t%s\t\t%.2f\n",emp[i]->id,emp[i]->name,emp[i]->salary);
}
printf("\n");
}
void searchEmployee()
{
int id;
printf("enter id to search:");
scanf("%d",&id);


for(int i = 0;i<count;i++)
{
if(emp[i]->id==id)
{
printf("found:%s,salary:%.2f\n\n",emp[i]->name,emp[i]->salary);
return;
}
}
printf("employee not found.\n\n");
}


void deleteEmployee()
{
int id;
printf("enter id to delete:");
scanf("%d",&id);


for(int i=0;i<count;i++)
{
if(emp[i]->id==id)
{
free(emp[i]);
emp[i]=emp[count-1];
count--;
printf("employee deleted.\n\n");
return;
}
}
printf("employee not found.\n\n");
}
void freeAll()
{
for(int i=0;i<count;i++)
{
free(emp[i]);
}
count=0;
}
int main()
{
int choice;
do
{
printf("1.add 2.display 3.search 4.delete 5.exit\n");
printf("choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:addEmployee();break;
case 2:displayEmployees();break;
case 3:searchEmployee();break;
case 4:deleteEmployee();break;
case 5:freeAll();
printf("bye!\n");break;
defalut:printf("invalid choice.\n\n");
}
}
while(choice!=5);
return 0;
}
