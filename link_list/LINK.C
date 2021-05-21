#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
}* START=NULL;
void createlist(int);
void display(void);
void addbeg(int);
void addend(int);
void deletebeg(void);
void deleteend(void);
void main()
{
	int ch,num;
	clrscr();
	do
	{
		printf("\n 1. create");
		printf("\n 2. display");
		printf("\n 3. add beginning");
		printf("\n 4. add end");
		printf("\n 5. delete beg");
		printf("\n 6. delete end");
		printf("\n 7. exit");
		printf("\n enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\n enter any number: ");
				scanf("%d",&num);
				createlist(num);
				break;
			case 2: display();
				break;
			case 3: printf("\n enter any number: ");
				scanf("%d",&num);
				addbeg(num);
				break;
			case 4: printf("\n enter your number: ");
				scanf("%d",&num);
				addend(num);
				break;
			case 5: deletebeg();
				break;
			case 6: deleteend();
				break;
			case 7: exit(0);
			default: printf("wrong choice");
		}
	}while(1);
}
void createlist(int num)
{
	struct node *q,*temp;
	if(START==NULL)
	{
		START=(struct node*)malloc(sizeof(struct node));
		START->data=num;
		START->next=NULL;
	}
	else
	{
		q=START;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=num;
		temp->next=NULL;
		q->next=temp;
	}
}
void display()
{
	struct node *q;
	for(q=START;q!=NULL;q=q->next)
		printf("%d\t",q->data);
}
void addbeg(int num)
{
	struct node *temp,*q;
	q=START;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=num;
	temp->next=q;
	START=temp;
}
void addend(int num)
{
	struct node *temp,*q;
	q=(struct node*)malloc(sizeof(struct node));
	if(q==NULL)
	{
		printf("unable to allocate memory");
	}
	else
	{
		q->data=num;
		q->next=NULL;
		temp=START;
		while(temp!=NULL && temp->next!=NULL)
		temp=temp->next;
		temp->next=q;
	}
}
void deletebeg()
{
	struct node *temp;
	temp=START;
	START=START->next;
	free(temp);
}
void deleteend()
{
	struct node *temp,*prev;
	temp=START;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	free(temp);
}




