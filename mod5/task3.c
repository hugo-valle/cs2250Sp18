/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  multiplication tables 1--10 with for loops
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int ROW = 10;
const int COL = 10;

// Main Function
int main()
{
    for(int r = 1; r <= ROW; r++)
    {
        for(int c = 1; c <= COL; c++)
        {
            printf("[%3d] ", r * c);
        }// end of col
        printf("\n");
        // value of c? NO. out of scope
        //printf("r[%d], c[%d]\n", r, c);
    }// end of row
    // value of c and r? NO. out of scope
    //printf("r[%d], c[%d]\n", r, c);

    return 0;
}
// Function Definitions


