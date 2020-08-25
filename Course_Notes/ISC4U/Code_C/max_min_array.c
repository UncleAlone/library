/*
 * @Title: Array Max/Min
 * @Author: Desmond Wang 
 * @Date: 2020-01-17 10:13:23 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2020-01-17 10:52:32
 * @Purpose: To determine the max and min numbers in the arrary decided by the user
 */

#include <stdio.h>
//To max size of the array is 100
#define MAX_SIZE 100

int main()
{

    int index, max, min;
    int size;
    int nums[MAX_SIZE];

    //To ask the user to decide the size of the arrary
    printf("Please enter a size in integer (0~100):   ");
    scanf("%d", &size);

    //To use loop to ask the user to store the number into arrary
    for (index = 0; index < size; index++)
    {
        printf("Please enter integers:   ");
        scanf("%d", &nums[index]);
    }

    /*To determine the max and min numbers
    Princple:
        From the first number, compare it with next number,
        if it is larger, it will be stored as a variable max,
        otherwise, it will be stored as a variable min.
    */
    max = nums[0];
    min = nums[0];
    for (index = 0; index < size; index++)
    {
        if (max <= nums[index])
        {
            max = nums[index];
        }
        if (min >= nums[index])
        {
            min = nums[index];
        }
    }

    //To display the final result to the user
    printf("Max is %d\n", max);
    printf("Min is %d\n", min);

    return 0;
}