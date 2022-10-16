#include <stdio.h>

int main()
{
    int i=0, n=7 ,Factorial=1;
    for(i=1;i<=n;i++)
    {
        Factorial *=i;

    }
    printf("The value of Factorial %d is %d",n,Factorial);
    return 0;
}