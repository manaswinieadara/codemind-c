#include<stdio.h>
int main()
{
    int i,c=0,d=0,foul=0;
    char str[200];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            c++;
        }
        else if(str[i]=='o')
        {
            d++;
        }
    }
    if(2*c==d)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}