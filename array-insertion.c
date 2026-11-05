#include<stdio.h>
int main()
{
int a[10]={10,20,30,40},n=4,pos=2,item=25,i;
for(i=n;i>pos;i--)
a[i]=a[i-1];
a[pos]=item;
n++;
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
