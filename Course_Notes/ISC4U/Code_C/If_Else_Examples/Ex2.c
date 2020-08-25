/*
 * @Author: Desmond Wang 
 * @Date: 2019-12-18 09:53:15 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2019-12-18 10:44:16
 */

//Program used to determine pass or fail mark
#include <stdio.h>

int main()
{
    int FinalMark;

    //to receive final mark as whole percentage
    printf("Enter you final mark as a whole percentage: \n");

    //assign final mark vale to variable FinalMark
    scanf("%d", &FinalMark);

    printf("Input is %d \n", FinalMark);

    //state condition, if mark is greater than 50, it is a pass. Else mark is a fail
    if (FinalMark >= 50)
    {
        printf("Congratulations, you passed.");
    }
    else
    {
        printf("Your mark is lee than 50%, you failed Mr.A's Class");
    }

    return 0;
}