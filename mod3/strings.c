/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  first use of strings
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:04:37 AM
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
    char name[11];  // allocate 20 chars + NULL char
    printf("Enter your name:\n");
    // Note: If you use an array, for ex: string, 
    // DO NOT use the & address operator
    // 2) The input ends with a space
    scanf("%s", name);
    printf("Your name is[%s]\n", name);


    return 0;
}
// Function Definitions


