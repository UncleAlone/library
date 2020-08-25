/*
 * @Author: Desmond Wang 
 * @Date: 2020-01-16 09:23:23 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2020-01-16 09:27:52
 */

#include <stdio.h>

int main()
{
    int even, num, sum, remainder;

    printf("Please enter a number:\n");
    scanf("%d", &num);

    for (num = num, sum = 0; num >= 0; num--)
    {
        remainder = num % 2;

        if (remainder == 0)
        {
            sum = sum + num;
        }
    }

    printf("Sum of even numbers is %d.", sum);

    return 0;
}