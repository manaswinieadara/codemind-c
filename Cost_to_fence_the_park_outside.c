#include<stdio.h>
int main()
{
    int c,L,B,W,area,cost_fence;
    scanf("%d%d%d%d",&L,&B,&W,&c);
    if(W+W>=L||W+W>=B)
    {
        area=((L+2*W)*(B+2*W)-L*B);
        cost_fence=area*c;
        printf("%d",cost_fence);
    }
}