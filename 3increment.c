#include<stdio.h>

int main()
{
    int i=5;
    printf("The value after ++i is %d\n",++i);
    printf("i++ = %d\n", i++);
    ++i;

    //++i   --->first increment then print
    //i++   --->first print thenm increment
     printf("The value of i is %d\n",i);

     i+=10;   //--->increment i by 10
    printf("the value of i is %d\n",i);
    return 0;

}