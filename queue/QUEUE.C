#include<stdio.h>
#include<conio.h>
#define MAX 50
void insert();
void deleted();
void display();
int queue[MAX];
int rear=-1;
int front=-1;
void main()
{
	int ch;
	clrscr();
	while(1)
	{
		printf("\n 1.insert");
		printf("\n 2.delete");
		printf("\n 3.display");
		printf("\n 4.exit");
		printf("\n enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
				break;
			case 2: deleted();
				break;
			case 3: display();
				break;
			case 4: exit(1);
			default: printf("wrong choice");
		}
	}
}
void insert()
{
	int add_item;
	if(rear==MAX-1)
	printf("queue overflow");
	else
	{
		if(front==-1)
		front=0;
		printf("insert the element in queue: ");
		scanf("%d",&add_item);
		rear=rear+1;
		queue[rear]=add_item;
	}
}
void deleted()
{
	if(front==-1 || front>rear)
	{
		printf("queue underflow");
		return;
	}
	else
	{
		printf("element deleted: %d\n",queue[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
		printf("queue empty");
	else
	{
		printf("queue: \n");
		for(i=front;i<=rear;i++)
			printf("\n %d",queue[i]);
		printf("\n");
	}
}