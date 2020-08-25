#include <stdio.h>

void cla(int m, int n, char oper)
{
    int res = 0;

    switch (oper)
    {
    case '+':
        res = m + n;
        break;
    case '-':
        res = m - n;
        break;
    case '/':
        res = m / n;
        break;
    case '%':
        res = m % n;
        break;
    }

    printf("%d", res);
}

int main()
{
    int m, n, res;
    m = n;
    m =1;
    char oper;

    cla(5, 6, '-');
    printf("\n%d", res);

    return 0;
}