/*
 * @Author: Desmond Wang 
 * @Date: 2020-01-11 22:25:47 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2020-01-11 22:50:03
 * @Purpose: the program is used to help user to find factors of a number
 */
#include <stdio.h>

int main()
{
    int number, n, factor = 0;

    //To ask user to input a number in integer
    printf("Please enter a positive integer that you wanna find its factors:\n");
    scanf("%d", &number);

    //To show the user the number inputted
    printf("The factors of %d includes:\n", number);

    /*
    Using loop to calculate the factors of the number inputted
    Principle:
        if a number divided another number has no remainder
            the divisor is one of the factors
    */
    while (factor <= number)
    {
        //Factor + 1 every time the loop runs
        factor++;
        //Find the remainder
        n = number % factor;

        //Determine if the remainder is zero
        if (n == 0)
        {
            //Show the factors on the screen
            printf(" %d ", factor);
        }
    }

    return 0;
}
