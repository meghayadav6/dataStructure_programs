#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *right;
	struct node *left;
};
struct node *createbst(struct node *,int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
int main()
{
	struct node *root=NULL;
	int choice,item,n,i;
	clrscr();
	do
	{
		printf("\n\n binary search tree operations");
		printf("\n\n 1.creation of binary tree");
		printf("\n 2.traverse in inorder");
		printf("\n 3.traverse in preorder");
		printf("\n 4.traverse in postorder");
		printf("\n\n enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				root=NULL;
				printf("\n binary tree for how many nodes: ");
				scanf("%d",&n);
				for(i=1;i<=n;i++)
				{
					printf("\n enter data for nodes %d: ",i);
					scanf("%d",&item);
					root=createbst(root,item);
				}
				printf("\n binary tree with nodes %d ready to use",n);
				break;
			case 2:
				printf("\n binary tree traversal in inorder:  \n");
				inorder(root);
				break;
			case 3:
				printf("\n binary tree traversal in preorder: \n");
				preorder(root);
				break;
			case 4:
				printf("\n binary tree traversal in postorder: \n");
				postorder(root);
				break;
			case 5:
				printf("\n terminating");
				break;
			default:
				printf("\n invalid option");
				break;
		}
	}while(choice!=5);
	return 0;
}
struct node *createbst(struct node *root,int item)
{
	if(root==NULL)
	{
		root=(struct node *)malloc(sizeof(struct node));
		root->left=root->right=NULL;
		root->data=item;
		return root;
	}
	else
	{
		if(item < root->data)
			root->left=createbst(root->left,item);
		else if(item > root->data)
			root->right=createbst(root->right,item);
		else
			printf("duplicate element");
			return(root);
	}
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("\t %d",root->data);
		inorder(root->right);
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("\t %d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("\t %d",root->data);
	}
}
