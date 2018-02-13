/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  learn how arrays work
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:44:26 AM
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
const int LEN = 20;

// Main Function
int main()
{
    int ar[LEN];
    ar[0] = 33; // first member
    ar[1] = 22; // second member
    ar[2] = 66; // third member
    ar[3] = 99; // fourth member

    // printf information
    printf("First value %d\n", ar[0]);
    printf("Fourth value %d\n", ar[3]);

    // Initialize the full array
    for(int i = 0; i < LEN; i++)
    {
        // Task initialize index numbers is divisible by 3
        // to 0, else set it to -99
        if( (i % 3) == 0)
        {
            ar[i] = 0; // initialize to 99
        }
        else
        {
            ar[i] = -99; // initialize to 99
        }
    }// end of for loop
    // Iterate over the full array
    for(int i = 0; i < LEN; i++)
    {
        printf("The %d value is %d\n", i + 1, ar[i]);
    }



    return 0;
}
// Function Definitions


