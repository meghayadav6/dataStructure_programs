#include<stdio.h>
#include<conio.h>
#define MAX 5
int st[MAX];
int top=-1;
void push(int st[],int val);
int pop(int st[]);
int pep(int st[]);
void display(int st[]);
void main()
{
	int option,val;
	clrscr();
	do{
	printf("\n|---------------|");
	printf("\n|menu program   |");
	printf("\n|---------------|");
	printf("\n|1.push         |");
	printf("\n|---------------|");
	printf("\n|2.pop          |");
	printf("\n|---------------|");
	printf("\n|3.peep         |");
	printf("\n|---------------|");
	printf("\n|4.display      |");
	printf("\n----------------|");
	printf("\n|5.exit         |");
	printf("\n|---------------|");
	textcolor(GREEN);
	textbackground(YELLOW);
	cprintf("\n enter your option: ");
	scanf("%d",&option);
	switch(option)
	{
	case 1: printf("\n enter value to insert in stack: ");
		scanf("%d",&val);
		push(st,val);
		break;
	case 2: val=pop(st);
		if(val!=-1)
		printf("\n %d deleted from the stack: ",val);
		break;
	case 3: val=pep(st);
		if(val!=-1)
		printf("%d is stored at top: ",val);
		break;
	case 4: display(st);
		break;
case 5:exit(0);
default:
printf("not a correct option");
}
}
while(option!=5);
getch();
}
void push(int st[],int val)
{
if(top==MAX-1)
{
printf("overflow");
}
else
{
top++;
st[top]=val;
}
}
int pop(int st[])
{
int val;
if(top==NULL)
{
printf("underflow");
}
else
{
val=st[top];
top--;
}
return val;
}
int pep(int st[])
{
if(top==-1)
{
printf("stack is empty");
return -1;
}
else
{
return(st[top]);
}
}
void display(int st[])
{
int i;
if(top==NULL)
{
printf("stack is empty");
}
else
{
for(i=top;i>=0;i--)
printf("\n%d",st[i]);
}
}

