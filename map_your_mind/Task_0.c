#include <stdio.h>

int main (void)
{
    int sum = 0;
    int n = 0;  //in this case n is to know how many numbers the user wanna give
    int number;
    int i = 1;
    printf("please mention how many numbers you wanna give!\n");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("please give a number!\n");
        scanf("%d", &number);
        sum = sum + (number * number);
        i++;
    }
    printf("the sum is %d", sum);
    return 0;  
}
