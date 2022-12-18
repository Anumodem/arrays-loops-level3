#include <stdio.h>
int main()
{
int m,n,t,i,j,x1,y1,x2,y2;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&m,&n);
int C[m][n];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&C[i][j]);
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
int sum=0;
for(i=x1-1;i<x2;i++)
for(j=y1-1;j<y2;j++)
sum=sum+C[i][j];
printf("%d\n",sum);
}

return 0;
}
