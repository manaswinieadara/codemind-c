#include<stdio.h>
int main()
{
    int N,sum=0,rem,original;
    original=N;
    scanf("%d",&N);
    while(N>0)
    {
        rem=N%10;
        sum=sum+rem;
        N=N/10;
    }
    N=original;
    if(N%sum==0)
    printf("False");
    else
    printf("True");
}