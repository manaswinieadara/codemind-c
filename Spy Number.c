#include<stdio.h>
int main()
{
    int i, n,sum=0,product=1,r;
    scanf("%d",&n);
    for(i=1;n>=1;i++)
    {
        r=n%10;
        sum=sum+r;
        product=product*r;
        n=n/10;
    }
        if(sum==product)
        {
        printf("Spy Number");
        }
        else
        {
        printf("Not Spy Number");
        }
    
        
        
    
    return 0;
    
}