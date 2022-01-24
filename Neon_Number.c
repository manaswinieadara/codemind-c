#include<stdio.h>
int main()
{
    int n,i,sum=0,sqr;
    scanf("%d",&n);
    sqr=n*n;
    for(i=sqr;i>0;i=i/10)
    {
        sum=sum+i%10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}