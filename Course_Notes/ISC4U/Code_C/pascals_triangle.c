/*
 * @Author: Desmond Wang 
 * @Date: 2020-01-15 10:18:18 
 * @Last Modified by: Desmond Wang
 * @Last Modified time: 2020-01-15 14:13:01
 */

#include <stdio.h>

int main()
{
    int n, k, i, j, term, row, a = 1, b = 1, c = 1, d, space;

    printf("Please enter a row number:\n");
    scanf("%d", &row);

    for (d = 0; d <= row; d++)
    {
        space = row - d - 1;

        if (d == 0)
        {
            for (space = space; space >= 0; space--)
            {
                printf("\t");
            }
            printf("1");
        }
        
        
        for (n = d, a = 1; n >= 1; n--)
        {
            a = n * a;
        }

        for (term = 0; term <= (d + 1); term++)
        {
            for (i = (d - term), c = 1; i >= 1; i--)
            {
                c = i * c;
            }

            for (k = term, b = 1; k >= 1; k--)
            {
                b = k * b;
            }

            j = a / (b * c);
            
            if (j != 0 && d != 0)
            {
                while (space >= 0)
                {
                    space--;
                    printf("\t");
                }
                
                printf("%d\t\t", j);
            }
        }
        
        printf("\n");
    }

    return 0;
}