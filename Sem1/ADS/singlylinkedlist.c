#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node*link;
};
struct node*start=NULL;
void traverse()
{
struct node*temp;
if(start==NULL)
printf("\nlist is empty\n");
else
{
temp=start;
printf("\nthe list is\n");
while(temp!=NULL)
{
printf("%d-->",temp->info);
temp=temp->link;
}
}
}
void insertAtFront()
{
int data;
struct node*temp;
temp=malloc(sizeof(struct node));
printf("\nenter number to be inserted:\n");
scanf("%d",&data);
temp->info=data;
temp->link=start;
start=temp;
}
void insertAtEnd()
{
int data;
struct node*temp,*head;
temp=malloc(sizeof(struct node));
printf("\nenter number to be inserted:\n");
scanf("%d",&data);
temp->link=0;
temp->info=data;
head=start;
while(head->link!=NULL)
{
head=head->link;
}
head->link=temp;
}
void insertAtPosition()
{
struct node*temp,*newnode;
int pos,data,i=1;
newnode=malloc(sizeof(struct node));
printf("enter position and data:\n");
scanf("%d%d",&pos,&data);
temp=start;
newnode->info=data;
newnode->link=0;
while(i<pos-1)
{
temp=temp->link;
i++;
}
newnode->link=temp->link;
temp->link=newnode;
}
void deleteFirst()
{
struct node*temp;
if(start==NULL)
printf("\nlist is empty:\n");
else
{
temp=start;
start=start->link;
free(temp);
}
}
void deleteEnd()
{
struct node*temp,*prevnode;
if(start==NULL)
printf("\nlist is empty\n");
else
{
temp=start;
while(temp->link!=0)
{
prevnode=temp;
temp=temp->link;
}
free(temp);
prevnode->link=0;
}
}
void deletePosition()
{
struct node*temp,*position;
int i=1,pos;
if(start==NULL)
printf("\nlist is empty\n");
else
{
printf("\nenter position:\n");
scanf("%d",&pos);
position=malloc(sizeof(struct node));
temp=start;
while(i<pos-1)
{
temp=temp->link;
i++;
}
position=temp->link;
temp->link=position->link;
free(position);
}
}
int main()
{
int choice;
while(1)
{
printf("\n\t1.to see list\n");
printf("\t2.for insertion at front\n");
printf("\t3.for insertion at end\n");
printf("\t4.for insertion at any position\n");
printf("\t5.for deletion at front\n");
printf("\t6.for deletion at end\n");
printf("\t7.for deletion at any position\n");
printf("\t8.to exit\n");
printf("\tenter choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
traverse();
break;
case 2:
insertAtFront();
break;
case 3:
insertAtEnd();
break;
case 4:
insertAtPosition();
break;
case 5:
deleteFirst();
break;
case 6:
deleteEnd();
break;
case 7:
deletePosition();
break;
case 8:
exit(1);
break;
default:
printf("\nincorrect choice\n");
}
}
return 0;
}




