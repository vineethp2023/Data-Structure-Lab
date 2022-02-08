#include<stdio.h>
#include<stdlib.h>
#define n 10
int item;
void enqueue(int item);
void dequeue();
void display();
int front=-1, rear=-1, i;
int q[n];
void main()
{
int opt;
do
{
printf("\n choose an option\n");
printf("\n 1. ENQUEUE\n");
printf("\n 2. DEQUEUE\n");
printf("\n 3. DISPLAY\n");
printf("\n 4. EXIT MENU\n");
scanf("%d",&opt);

switch(opt)
{
case 1: printf("\n Enter the item to insert: \n");
        scanf("%d",&item);
        enqueue(item);
        break;

case 2: dequeue();
        break;

case 3: display();
        break;

case 4: exit(0);

default: printf("\n Invalid Choice\n");
}
}
while(opt!=4);
}
void enqueue(int item)
{
if(rear>=n-1)
printf("\n Queue Overflow, Insertion not possible\n");
else if(front==-1 && rear==-1)
{
front++;
rear++;
q[rear]=item;
display();
}
else
{
rear++;
q[rear]=item;
display();
}
}
void dequeue()
{
if(front==-1)
printf("\n Queue underflow!....\n");
else if(front==0 && rear==0)
{
printf("\n the item %d has been deleted\n",q[front]);
front--;
rear--;
display();
}
else
{
printf("\n the item %d has been deleted\n",q[front]);
front++;
display();
}
}
void display()
{
if(front==-1)
printf("\n Queue has no elements to show\n");
else
{
printf("\n the items in the queue are as follow\n");
for(i=front;i<=rear;i++)
printf("%d\t",q[i]);
}
}
