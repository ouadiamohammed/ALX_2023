#include <stdio.h>

int main (void)
{
    int sum = 0;
    int num = 0;
    while (1)
    {
        printf("please enter your number!\n");
        scanf ("%d", &num);
        if (num < 0)
        {
            break;
        }else{
            sum = sum + num;
        }
    }
    printf("the result is %d\n", sum);
    return (0);
}