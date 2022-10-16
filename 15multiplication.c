#include <stdio.h>

int main()
{
    int a,i;
    printf("enter the number");
    scanf("%d",&a);

  printf("Multiplication table of the given number\n");  

    
    for (i=1;i<=10;i++)
    {
        printf("%d x %d= %d\n",a,i,a*i);

    }
    return 0;

}

