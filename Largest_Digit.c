#include<stdio.h>
int main ()
{
int num, rem, Largest= 0;
scanf ("%d", &num);

while (num > 0)
    {
  rem = num % 10;
    if (Largest < rem)
      {
       Largest = rem;
      }
  num = num / 10;
    }
printf ("%d", Largest);
return 0;
}

