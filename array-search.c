#include<stdio.h>
int main()
{
int a[5]={10,20,30,40,50},key=30,i;
for(i=0;i<5;i++)
{
if(a[i]==key)
{
printf("elements found at position %d",i+1);
return 0;
}
}
printf("elements not found");
return 0;
}
