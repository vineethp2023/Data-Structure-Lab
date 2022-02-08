#include<stdio.h>
#include<stdlib.h>
#define size 10
int top=-1,i,count=0;
int item;
int opt;
int stack[size];
void push(int item);
int pop();
void display();
void main()
{
do
{
printf("\n SELECT ANYONE OF THE OPTIONS\n");
printf("\n1. PUSH INTO STACK\n");
printf("\n2. POP OUT FROM STACK\n");
printf("\n3. DISPLAY STACK ITEMS\n");
printf("\n4. EXIT FROM THE MENU\n");
scanf("%d",&opt);
switch(opt)
{
case 1: if(top==size-1)
        printf("\n Push Operation failed: Stack Overflowing\n");
        else
        {
        printf("\n Enter an item to be pushed into:\n\n");
        scanf("%d",&item);
        push(item);
        display();
        }
        break;

case 2: if(top==-1)
        printf("\n stack is underflowing,Try later.....\n");
        else
        {
        printf("\n Poping Out the last element pushed in.....!!\n");
        item=pop();
        printf("\n the item %d has been successfully poped from the stack\n",item);
        display();
        }
        break;

case 3: if(top==-1)
        printf("\n Stack is empty....!\n");
        else
        {
        printf("\n Displaying Stack Elements...\n");
        display();
        }
        break;

case 4: printf("\n Exiting Program, Thank You.....!!\n");
        exit(0);

default: printf("\n INVALID OPTION, PLEASE MAKE A VALID INPUT....\n");
}
}
while(opt!=4);
}
void push(int item)
{
if(top>=size-1)
printf("\n stack is overflowing...Try Later!!\n");

else
{
top++;
stack[top]=item;
count++;
printf("\n Item has been successfully pushed in\n");
}
}

int pop()
{
if(top==-1)
    printf("\n Stack is underflowing, Try Later!....\n");

else
   {
       item=stack[top];
       top--;
       count--;
       return item;
   }
}

void display()
{
printf("\n The items in the stack are\n");
for(i=0;i<count;i++)
    printf("%d\t",stack[i]);
}


