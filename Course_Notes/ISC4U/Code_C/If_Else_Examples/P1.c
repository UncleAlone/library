/*
 * @Author: Desmond Wang 
 * @Date: 2019-12-19 09:25:52 
 * @Last Modified by:   Desmond Wang 
 * @Last Modified time: 2019-12-19 09:25:52 
 */

/*Program used to determine whether the children can ride Joker rollercaster
    in Mr.A's wonderland*/
#include <stdio.h>

int main()
{
    int height;

    //to receive the player's height in inches
    printf("Please enter your height in inches:\n");
    //assign height value to variable height
    scanf("%d", &height);

    if (height >= 48)
    {
        printf("You are allowed to ride.");
    }
    else
    {
        printf("Sorry, you can not ride it.");
    }

    return 0;
}