#include<stdio.h>
int main()
{
    int m,n,i,r,count=0,t;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d%d",&m,&n);
        count=0;
        for(i=m;i<=n;i++)
        {
          r=i%10;
          if(r==2||r==3||r==9)
          count++;
        }
        printf("%d
",count);
    }
    return 0;
}