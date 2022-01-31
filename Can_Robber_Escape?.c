#include<stdio.h>
int main()
{
    int i,n,jun[20],odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&jun[i]);
    }
    for(i=0;i<n;i++)
    {
        if(jun[i]%2!=0)
        odd++;
    }
    if(odd<=2)
    printf("YES");
    else
    printf("NO");
    return 0;
}