#include<stdio.h>
#include<stdlib.h>
void create_array();
void display();
void array_del(int);
void insert(int,int);
int count=0,n,i=0,n,pos,flag=0;
int a[30],e;
void main()
{
int opt;
do
{
printf("\nEnter a choice from the below menu\n");
printf("\n1. Create an array");
printf("\n2. insert an element");
printf("\n3. traverse the array");
printf("\n4. delete an element");
printf("\n5. exit \n");
scanf("%d",&opt);
switch(opt)
{
case 1: if(flag!=1)
        {
        create_array();
        display();
        }
        else printf("\n array has already created\n");
        break;

case 2: printf("\n enter an element to be inserted: ");
        scanf("%d",&e);
        printf("\n enter a position: ");
        scanf("%d",&pos);
        insert(pos,e);
        display();
        break;

case 3:
        display();
        break;

case 4: printf("\n enter the position of element to be deleted: ");
        scanf("%d",&pos);
        array_del(pos);
        display();
        break;
case 5: exit(0);

default: printf("\n Invalid choice\n");
}
}
while(opt!=5);
}
void create_array()
{
    flag=1;
    printf("\n enter the size of array: ");
    scanf("%d",&n);
    printf("\n enter %d elements \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void insert(int y,int item)
{
    if(a[y]!='\0')
    {
        printf("\n the item %d replaced by %d ",a[y],item);
        a[y]=item;
    }
    else if(y>n-1)
        printf("\n the position not present in array\n");
    else
    {
    a[y]=item;
    count++;
    display();
    }
}
void display()
{
if(flag==0)
        printf("\n array is empty\n");
else
{
    printf("\n array elements are\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

for(i=0;i<n;i++)
    printf("a[%d]=%d\t",i,a[i]);
}
}
void array_del(int loc)
{
if (a[loc]='\0')
    printf("\n deletion not possible at the given position , the position is empty\n");
else if(loc>n-1)
    printf("\n specified position is not in array\n");
else if(flag==0)
    printf("\n array has not yet created\n");
else
{
printf("\n the element %d has been deleted!\n",a[loc]);
a[loc]='\0';
display();
}
}
