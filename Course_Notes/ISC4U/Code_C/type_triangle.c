/*
 * @Author: Desmond Wang
 * @Date: 2020-01-08 11:41:49 
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2020-01-08 11:43:25
 */
#include<stdio.h>

int main() {

    int side1, side2, side3;

    printf("Please enter 3 numbers as 3 sides of a triangle in interger.\n");
    scanf("%d %d %d", &side1,&side2,&side3);

    if (side1 >0 && side2 > 0 && side3 > 0)
    {
        if ((side1 + side2) > side3)
        {
            if (side1 == side2 || side1 == side3 || side2 == side3)
            {
                if (side2 == side3)
                {
                    printf("The triangle is an equilateral triangle.\n");
                }
                else
                {
                    printf("The triangle is an isosceles triangle.\n");
                }
            }
            else
            {
                printf("The triangle is an scalene triangle.\n");
            }
            
        }
        else
        {
            printf("The 3 sides cannot form a triangle.\n");
        }
    }
    else
    {
        printf("Please enter positive number.\n");
    }

    return 0;    
}