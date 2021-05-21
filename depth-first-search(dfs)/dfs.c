#include <stdio.h>
#include <stdio.h>
int a[20][20],s[20],visited[20],n,i,j,top=-1;
void dfs(int v);
main()
{
    int v;
    printf("\n enter the number of vertices: ");
    scanf("%d",&n);
    printf("enter the adjacency matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    }
printf("\n enter the starting vertex: ");
scanf("%d",&v);
for(i=0;i<=n;i++)
{
    s[i]=0;
    visited[i]=0;
}
dfs(v);
printf("\n the node which are reachable are: \n");
for(i=0;i<n;i++)
{
    if(visited[i])
        printf("%d\t",i);
}
return 0;
}
void dfs(int v)
{
    for(i=0;i<n;i++)

        if(a[v][i] && !visited[i])
        s[top++]=i;

        if(top!=-1)
        {
            visited[s[top]]=1;
            dfs(s[top--]);
        }

}


