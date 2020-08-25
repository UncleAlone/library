/*
 * @Author: Desmond Wang 
 * @Date: 2019-12-17 10:42:27 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2019-12-18 10:05:07
 */

//The program used to determine the level of the mark
#include <stdio.h>

int main()
{
    //define the value "mark"
    int mark;

    //allow the user to input his/her mark
    printf("Please enter Your Marks: \n");
    //assign mark value to variable mark
    scanf("%d", &mark);

    //state condition, and identify the level that fits the mark
    //check if mark is less than 0
    if (mark < 0)
    {
        printf("It's impossible to get a negative mark.");
    }
    //check if mark is between less than
    else if (mark >= 0 && mark < 50)
    {
        printf("Your mark is F");
    }
    //check if mark is between 50 and 53
    else if (mark >= 50 && mark <= 53)
    {
        printf("Your mark is D-");
    }
    //check if mark is between 54 and 57
    else if (mark >= 54 && mark <= 57)
    {
        printf("Your mark is D");
    }
    //check if mark is between 58 and 59
    else if (mark >= 58 && mark <= 59)
    {
        printf("Your mark is D+");
    }
    //check if mark is between 60 and 63
    else if (mark >= 60 && mark <= 63)
    {
        printf("You mark is C-");
    }
    //check if mark is between 64 and 67
    else if (mark >= 64 && mark <= 67)
    {
        printf("You mark is C");
    }
    //check if mark is between 68 and 69
    else if (mark >= 68 && mark <= 69)
    {
        printf("You mark is C+");
    }
    else if (mark >= 70 && mark <= 73)
    {
        printf("You mark is B-");
    }
    //check if mark is between 74 and 77
    else if (mark >= 74 && mark <= 77)
    {
        printf("You mark is B");
    }
    //check if mark is between 78 and 79
    else if (mark >= 78 && mark <= 79)
    {
        printf("You mark is B+");
    }
    //check if mark is between 80 and 84
    else if (mark >= 80 && mark <= 84)
    {
        printf("You mark is A-");
    }
    //check if mark is between 85 and 89
    else if (mark >= 85 && mark <= 89)
    {
        printf("You mark is A");
    }
    //check if mark is between 90 and 100
    else if (mark >= 90 && mark <= 100)
    {
        printf("You mark is A+");
    }
    //check if mark is greater than 100
    else
    {
        printf("You are just kidding. It can not be over 100.");
    }
    
    return 0;
}