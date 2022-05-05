#include<stdio.h>
int main()
{
    int count,first_term=0,second_term=1,next_term,i;
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        if(i<=1)
        {
            next_term=i;
        }
        else
        next_term=first_term+second_term;
        first_term=second_term;
        second_term=next_term;
        printf("%d ",next_term);
    }
}