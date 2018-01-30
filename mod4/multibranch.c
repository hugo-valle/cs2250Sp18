/*
 * =====================================================================================
 *
 *       Filename:  multibranch.c
 *
 *    Description:  Nested branches
 *
 *        Version:  1.0
 *        Created:  01/30/2018 10:10:24 AM
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
    int income = 30000;
    if(income)  // IF income != 0
    {
        printf("Income is %d\n", income);
    }
    else
    {
        printf("No income\n");
    }

    return 0;
}
// Function Definitions


