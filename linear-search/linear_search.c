#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a[20],i,x,n;

	printf("range of an array: ");
	scanf("%d",&n);
	printf("\n enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n enter element to search: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d is present at location %d \n",x,i+1);
            break;
        }
    }
    if(i==n)
        printf("%d not present in the array \n",x);

getch();
}
