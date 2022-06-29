#include<stdio.h>
int main()
{
    int a[100],i,l=0,k=0;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    int b[100];
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        l++;
        else if(a[i]<b[i])
        {
            k++;
            
        }
        
    }
    printf("%d ",l);
    printf("%d ",k);
}