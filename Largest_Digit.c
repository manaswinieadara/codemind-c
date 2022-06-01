#include<stdio.h>
int main()
{
    int rem,n,max=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        if(rem>max)
        {
            max=rem;
        }
    }
    printf("%d",max);
}