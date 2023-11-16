#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int n;
void insert();
void display();
void delete();
void search();
 int main()
{

int ch;
printf("enter the size of the queue:\n");
scanf("%d",&n);
while(1)
{
printf("\n\t1:insertion");
printf("\n\t2:deletion");
printf("\n\t3:display");
printf("\n\t4:search");
printf("\n\t5:exit");
printf("\nenter your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
search();
break;
case 5:
printf("\npress any key to exit:");
exit(0);
break;
default:
printf("\ninvalid choice");
}
}
return 0;
}
void insert()
{
int x;
if((front==0&&rear==n-1)||(front==rear+1))
{
printf("queue is full\n");
}
else
{
printf("enter the element to insert:");
scanf("%d",&x);
if(front==-1&&rear==-1)
front=rear=0;
else if(rear==n-1&&front!=0)
rear=0;
else
rear=(rear+1)%n;
a[rear]=x;
}
}

void display()
{
int i;
printf("front=%d\nrear=%d\n",front,rear);
if(front==-1)
printf("\nqueue is empty");
else if(front<=rear)
{
for(i=front;i<=rear;i++)
printf("%d",a[i]);
}
else
{
for(i=front;i<n;i++)
printf("%d",a[i]);
for(i=0;i<=rear;i++)
printf("%d",a[i]);
}
}

void delete()
{
if(front==-1)
printf("\nqueue is empty");
else
{
printf("deleted element is %d",a[front]);
if(front==rear)
front=rear-1;
else
{
if(front==n-1)
front=0;
else
front+=1;
}
}
}

void search()
{
int x,i,j;
printf("enter the element to search:");
scanf("%d",&x);
if(front<=rear)
{
int f1=0
for(i=front;i<=rear;i++)
{
if(a[i]=x)
{
printf("element found at position %d",i);
p1=1;
break;
}}
if(f1==0)
printf("element not found");
}
else
{
int f=0;
for(i=front,j=1;i<n;i++j++)
{
if(a[i]==x)
{
f=1;
printf("element found at position:%d",j);
break;
}}
if(f==0)
{
int f2==0;
for(i=0;i<=rear;i++)
{
if(a[i]==x)
{
printf("element found at position:%d",i+n-1);
f2=1;
break;
}}
if(f2==0)
printf("element not found");
}
}
}



 


