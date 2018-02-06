/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Multiplication tables 1-10, with while loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:38:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
const int MIN = 1;
const int MAX = 5;
// Main Function
int main()
{
    int row = MIN;
    int col = MIN;

    // Rows
    while(row <= MAX)
    {
        while(col <= MAX)
        {
            printf("[%3d] ", row * col);
            col++;
        }
        printf("\n");
        // Update values
        col = MIN;
        row++;
    }

    return 0;
}
