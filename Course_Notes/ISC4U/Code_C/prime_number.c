/*
 * @Author: Desmond Wang 
 * @Date: 2020-01-14 09:32:48 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2020-01-14 10:02:31
 */

#include <stdio.h>

int main()
{
    int number, n, factor, a = 0;

    printf("Please enter a positive integer that you wanna find its factors:\n");
    scanf("%d", &number);

    for (factor =number; factor > 1; factor--)
    {
        n = number % factor;

        if (n == 0 && factor < number)
        {
            printf("%d is not a prime number\n", number);
            a = 1;
            break;
        }
    }
    
    if (a == 0) {
        printf("%d is a prime number\n", number);
    }

    return 0;
}