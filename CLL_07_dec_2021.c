#include<stdio.h>
#include<stdlib.h>
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void display();
void create();
struct node
{
int data;
struct node *next;
}*head=NULL;
struct node *newnode;
int main()
{
int opt;
do
{
printf("\n SELECT AN OPTION:\n");
printf("\n1. Insertion at beginning\n");
printf("\n2. Insertion at end\n");
printf("\n3. Insertion at a given position\n");
printf("\n\n4. Deletion at beginning\n");
printf("\n5. Deletion at end\n");
printf("\n6. Deletion at a given position\n");
printf("\n\n7.Traverse list\n");
scanf("%d",&opt);
switch(opt)
{
case 1:	insert_begin();
		break;
case 2: insert_end();
		break;
case 3: insert_pos();
		break;
case 4: delete_begin();
		break;
case 5: delete_end();
		break;
case 6: delete_pos();
		break;
case 7: display();
		break;
case 8: exit(0);
default: printf("\n Invalid option\n");
}
}
while(opt!=8);
return 0;
}
void create()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n enter the data for the node: ");
scanf("%d",&newnode->data);
}
void insert_begin()
{
create();
if(head==NULL)
{
head=newnode;
newnode->next=head;
}
else
{
struct node *temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
newnode->next=head;
temp->next=newnode;
head=newnode;
}
display();
}
void insert_end()
{
create();
if(head==NULL)
{
head=newnode;
newnode->next=head;
}
else
{
struct node *temp=head;
while(temp->next!=head)
temp=temp->next;
temp->next=newnode;
newnode->next=head;
}
display();
}
void insert_pos()
{
int key;
create();
printf("\n enter a data after which the node is to be inserted: ");
scanf("%d",&key);
if(head==NULL)
printf("\n circular linked list is empty\n");
else
{
struct node *temp=head;
while(temp->data!=key && temp->next!=head)
temp=temp->next;
if(temp->data==key)
{
newnode->next=temp->next;
temp->next=newnode;
}
else
printf("\n key not found\n");
}
display();
}
void delete_begin()
{
if(head==NULL)
printf("\n circular linked list is empty\n");
else
{
struct node *temp=head;
struct node *temp1=head;
while(temp->next!=head)
temp=temp->next;
temp->next=head->next;
head=temp->next;
free(temp1);
}
display();
}
void delete_end()
{
if(head==NULL)
printf("\n circular linked list is empty\n");
else
{
struct node *temp=head;
struct node *temp1=temp;
while(temp->next!=head)
{
temp1=temp;
temp=temp->next;
}
temp1->next=temp->next;
free(temp);
}
display();
}
void delete_pos()
{
struct node *temp=head;
struct node *temp1;
int key;
if(head==NULL)
printf("\n circular linked list is empty\n");
else
{
printf("\n enter a data which you want to delete: ");
scanf("%d",&key);
if(temp->data==key&&temp->next==head)
{
	head=NULL;
	free(temp);
}
else if(temp->data==key && temp->next!=head)
{
	head=temp->next;
	free(temp);
}
else
{
while(temp->data!=key && temp->next!=head)
{
temp1=temp;
temp=temp->next;
}
if(temp->data==key)
{
temp1->next=temp->next;
free(temp);
}
else
printf("\n key not found\n");
}
}
display();
}
void display()
{
struct node *temp=head;
if(head==NULL)
printf("\n there is no elements to show\n");
else
{
printf("\n the elements in the Circular Linked List are\n");
while(temp->next!=head)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}
}






