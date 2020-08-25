/*
 * @Author: Desmond Wang 
 * @Date: 2020-01-14 10:46:51 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2020-01-14 10:48:39
 */

#include <stdio.h>

int main()
{
    int number, n, factor = number, a = 0, b = 0;

    printf("Please enter a positive integer:\n");
    scanf("%d", &number);

    for (number=number; number > 1; number--)
    {
        a = 0;
        factor = number;

        for (factor=factor; factor > 1; factor--)
        {
            n = number % factor;

            if (n == 0 && factor < number)
            {
                a = 1;
            }
        }

        if (a == 0)
        {
            b ++;
            a = 0;
        }
    }

    printf("There are %d prime numbers.", b);

    return 0;
}