#include <stdio.h>
int main()
{
    int a,n,k,i,b;
    scanf("%d%d%d",&a,&n,&k);
    for(i=0;i<k;i++)
    {
        b=a%(n+1);
        printf(" %d",b);
        a=a/(n+1);
        }
        while(a>0){}

	return 0;
}
