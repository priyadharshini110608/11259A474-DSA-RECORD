#include<stdio.h>
#define MAX 5
int queue[MAX];
int front =-1,rear =-1;
void enqueue(int value)
{
if(rear==MAX-1)
{
printf("queue overflow\n");
}
else
{
if(front==-1)
front=0;
rear++;
queue[rear]=value;
printf("%d inserted into queue\n",value);
}
}
void dequeue()
{
if(front==-1||front>rear)
{
printf("queue underflow\n");
}
else
{
printf("%d deleted from queue\n",queue[front]);
front++;
}
}
void display()
{
int i;
if(front==-1||front>rear)
{
printf("queue is empty\n");
}
else
{
printf("queue elements are:");
for(i=front;i<=rear;i++)
{
printf("%d",queue[i]);
}
printf("\n");
}
}
int main()
{
int choice,value;
while(1)
{
printf("\n---simple queue---\n");
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter value:");
scanf("%d",&value);
enqueue(value);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
return 0;
default:
printf("invalid choice\n");
}
}
return 0;
}

