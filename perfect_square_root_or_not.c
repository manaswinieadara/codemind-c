#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float b;
    scanf("%d",&a);
    b=sqrt((double)a);
    a=b;
    if(a==b)
    printf("True");
    else
    printf("False");
    return 0;
}