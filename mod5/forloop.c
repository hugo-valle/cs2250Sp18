/*
 * =====================================================================================
 *
 *       Filename:  forloop.c
 *
 *    Description:  practice for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:34:10 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Main Function
int main()
{
    // For loop
    // 1) Init your condition
    // 2) Do your work 
    // 3) Update condition
    // IF still true, continue work
    // ELSE finish loop
    int rounds = 3;
    
    while(rounds != 0)
    {
        printf("Hello there while\n");
        rounds -= 1;
    }
    // For loop version
    rounds = 4;
    for(int r = 0; 
            r < rounds; 
            r++)
    {
        printf("Hello there for\n");
    }
    printf("rounds [%d]\n", rounds);
    printf("rounds [%d]\n", rounds++);
    printf("rounds [%d]\n", rounds);
    printf("rounds [%d]\n", ++rounds);

    return 0;
}
// Function Definitions


