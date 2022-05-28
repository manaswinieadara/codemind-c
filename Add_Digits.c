#include<stdio.h>
int digitsum(int n)
{
    int sum=0;
    while(sum>9||n>0)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        sum+=n%10;
        n/=10;
    }
    return sum;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digitsum(digitsum(n)));
}