#include<stdio.h>
int linear_search(int *arr,int n,int avrg)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(avrg==arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,i,arr[100],avrg,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    avrg=s/n;
    if(linear_search(arr,n,avrg))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}