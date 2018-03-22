/*
 * =====================================================================================
 *
 *       Filename:  firstPointer.c
 *
 *    Description:  My First pointers
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:56:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int i = 5;
    // A pointer to an integer
    int* pi = NULL;

    printf("Value of  i[%14d]  \taddress[%p]\n", i, &i);
    printf("Value of pi[%14p]  \taddress[%p]\n", pi, &pi);
    // Assign value to pointer
    pi = &i;
    printf("Value of pi[%14p]  \taddress[%p]\n", pi, &pi);
    // Modify integer through pointer
    *pi = 6;
    printf("Value of  i[%14d]  \taddress[%p]\n", i, &i);
    printf("Value of pi[%14p]  \taddress[%d]\n", pi, *pi);
    i = 99;
    printf("Value of  i[%14d]  \taddress[%p]\n", i, &i);
    printf("Value of pi[%14p]  \taddress[%d]\n", pi, *pi);

    return 0;
}
// Function Definitions


