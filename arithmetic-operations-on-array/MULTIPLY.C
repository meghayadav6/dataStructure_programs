#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	int rows1,cols1,rows2,cols2,resrow,rescol;
	int mat1[5][5],mat2[5][5],res[5][5];
	clrscr();
	printf("\n enter the number of rows in the first matrix: ");
	scanf("%d",&rows1);
	printf("\n enter the number of columns in the first matrix: ");
	scanf("%d",&cols1);
	printf("\n enter the number of rows in the second matrix: ");
	scanf("%d",&rows2);
	printf("\n enter the number of columns in the second matrix: ");
	scanf("%d",&cols2);
	resrow=rows1;
	rescol=cols2;
	printf("\n enter the elements of the first matrix: ");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<cols1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\n enter the elements of the second matrix: ");
	for(i=0;i<rows2;i++)
	{
		for(j=0;j<cols2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<resrow;i++)
	{
		for(j=0;j<rescol;j++)
		{
			res[i][j]=0;
			for(k=0;k<rescol;k++)
			res[i][j]+=mat1[i][k]*mat2[k][j];
		}
	}
	printf("\n the elements of the product matrix are: ");
	for(i=0;i<resrow;i++)
	{
		printf("\n");
		for(j=0;j<rescol;j++)

			printf("%d\t",res[i][j]);

	}
getch();
}
