#include <stdio.h>

//this Function swaps values pointed by n1 and n2
void swap (int *n1, int *n2)
{
    int SWAP;
    SWAP =*n1;
    *n1 = *n2;
    *n2 = SWAP;
}

int main (void)
{
    int a;
    int b;
    int c;
    printf("please enter 3 numbers!\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
        swap(&a, &b);
    else if (a>c)
        swap(&a, &c);
    else if (b>c)
        swap(&b, &c);
    printf ("%d %d %d", a,b,c);
    
}