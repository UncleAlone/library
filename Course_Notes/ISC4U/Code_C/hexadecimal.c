/*
 * @Title: Hexadecimal Calculator
 * @Author: Desmond Wang 
 * @Date: 2020-01-27 09:33:45 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2020-01-27 10:43:46
 */

#include <stdio.h>
#define MAX_SIZE 100

int main()
{

    int num, index, totalIndex, i;
    int arr[MAX_SIZE];

    //To ask a user to inout a number
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("%d converts to hexadecimal is ", num);

    /*
    Divide the number inputted by 16 and store its remainder.
    Then keep the result divided by 16 over and over again until result = 0.
    */
    for (index = 0; num > 0; index++)
    {
        arr[index] = num % 16;
        num = num / 16;
        totalIndex = index;
    }

    /* 
    print out the remainder stored from the last one to the first one,
    and if the remainder is between 10 and 15, convert it to "A" - "F"
    */
    for (index = totalIndex; index >= 0; index--)
    {
        switch (arr[index])
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d", arr[index]);
            break;
        }
    }

    return 0;
}