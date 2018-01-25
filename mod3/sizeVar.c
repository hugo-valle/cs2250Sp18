/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  Check variable size in bytes
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:00:22 AM
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

// Function Prototypes

// Main Function
int main()
{
    int num = 1;
    unsigned int unum = 1;
    num = num * 10000; 
    unum = unum * 10000; 
    // sizeof: returns the size of variable in bytes
    printf("The sizeof int is [%ld]\n", sizeof(num));
    printf("The sizeof uint is [%ld]\n", sizeof(unum));
    printf("num = [%d]. unum=[%d]\n", num, unum); 
    num *= 10000; // compound operator
    unum *= 10000;
    printf("num = [%d]. unum=[%d]\n", num, unum); 
    // What is the range of an int?
    // 2^32 ~ 4294000000 = i combinations
    // Range: -(i/2) to + (i/2 -1)
    num *= 10000; // compound operator
    unum *= 10000;
    printf("num = [%d]. unum=[%u]\n", num, unum); 

    return 0;
}
// Function Definitions


