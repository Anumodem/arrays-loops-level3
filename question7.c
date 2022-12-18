#include <stdio.h>
int main()
{ int a[1000][1000],t,n,i,j,count=0;
scanf("%d",&t);
while(t--)
{ scanf("%d",&n);
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{ if(a[i][j]==1)
count++;

}
}
if(count==1)
printf("0\n");
else if(count==2)
printf("1\n");
else
{ for(i=2;i<count;i++)
if(count%i==0)
printf("%d\n",count-1);
else if(i==(count-1))
printf("-1\n");
}
count=0;
}
return 0;
}
