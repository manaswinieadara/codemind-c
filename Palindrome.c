#include<stdio.h>
int main()
{
    int N,original,rev=0,rem;
    scanf("%d",&N);
    original=N;
    while(N!=0)
    {
       rem=N%10;
       rev=rev*10+rem;
       N=N/10;
    }
    if(original==rev)
    printf("True");
    else
    printf("False");
    return 0;
}