/*
 * @Author: Desmond Wang 
 * @Date: 2019-12-18 10:18:02 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2019-12-18 10:56:56
 */

//Program used to determine if they can purchase alcohol
#include <stdio.h>

int main()
{
    int age;

    //to receive the user's age
    printf("Please enter your age: \n");
    //assign age value to variable age
    scanf("%d", &age);

    //state condition, if age is bigger than 19, you can buy. Else you cannot
    if (age >= 19)
    {
        printf("You can buy alcohol. Which type do you like?");
    }
    else
    {
        printf("Sorry, you cannot buy.");
    }

    return 0;
}