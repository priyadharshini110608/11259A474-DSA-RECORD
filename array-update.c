#include<stdio.h>
int main()
{
int arr[]={10,20,30,40,50},n=5,pos=3,value=4;
arr [pos] = value;
printf("updated array:");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}                                          
