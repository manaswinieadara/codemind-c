#include<stdio.h>
int main()
{
    int N,rem,rev=0;
    scanf("%d",&N);
    while(N>0)
    {
     rem=N%10;
     rev=(rev*10)+rem;
     N=N/10;
    }
    printf("%d",rev);
    return 0;
}