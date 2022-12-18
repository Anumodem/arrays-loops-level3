#include <stdio.h>
#include<stdbool.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,guest=0,req=0,i,j;

bool got=0;
scanf("%d",&n);
int a[1000][1000];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
int count=0;
for(j=0;j<n;j++)
{
if(a[i][j]==1)
{
count++;
}

}
if(count==0)
{
guest++;
}
if(guest==1 && !got)
{
got=1;
req=i+1;
}
}
if(guest!=1)
{
printf("-1\n");
}
else
{
printf("%d\n",req);
}

}

return 0;
}
