#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Please enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b)
    {
        if (c >= a)
        {
            printf("The max is %d.\n", c);
        }
        else
        {
            printf("The max is %d.\n", a);
        }
    }
    else
    {
        if (c >= b)
        {
            printf("The max is %d.\n", c);
        }
        else
        {
            printf("The max is %d.\n", b);
        }
    }

    return 0;
}