#include<stdio.h>
#include<ctype.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int value)
{
stack[++top]=value;
}
int pop()
{
return stack[top--];
}
int main()
{
char postfix[MAX];
int i,a,b,result;
printf("enter postfix expression:");
scanf("%s",postfix);
for(i=0;postfix[i]!='\0';i++)
{
if(isdigit(postfix[i]))
{
push(postfix[i] - '0');
}
else
{
b=pop();
a=pop();
switch(postfix[i])
{
case'+':
result = a+b;
break;
case'-':
result = a-b;
break;
case'*':
result = a*b;
break;
case'/':
result = a/b;
break;
default:
printf("invalid operator\n");
return 1;
}
push(result);
}
}
printf("result=%d/n",pop());
return 0;
}
