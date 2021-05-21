#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a[10],i,n,mid,pos=0,end,beg,num;

	printf("range of an array: ");
	scanf("%d",&n);
	printf("enter elements in an array: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter number to search: ");
	scanf("%d",&num);
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while(beg<=end)
	{

		if(a[mid]<num)
			beg=mid+1;
		else if(a[mid]==num){
            printf("%d found at location %d \n",num,mid+1);
            break;
		}
		else
            end=mid-1;
            mid=(beg+end)/2;
	}
	if(beg>end)
        printf("not found! %d not present in the list \n",num);
getch();
}
