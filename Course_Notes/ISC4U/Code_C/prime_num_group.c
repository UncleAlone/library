/*
 * @Title: List Prime Number Program
 * @Author: Desmond Wang 
 * @Date: 2020-01-14 10:05:03 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2020-01-14 10:18:47
 * Purpose: To list all the prime number less than the number inputted.
 */

#include <stdio.h>

int main()
{
    int number, n, factor = number, a = 0;

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
            printf("%d is a prime number\n", number);
            a = 0;
        }
    }

    return 0;
}