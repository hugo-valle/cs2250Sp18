/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  Learn operations on characters
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:47 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>   // for character operations
// Main Function
int main()
{
    char num;
    printf("Enter a number 0-9: ");
    scanf("%c", &num);
    if(num == '0')
    {
        printf("You entered 0\n");
    }
    else
    {
        printf("You entered non-zero [%c]\n", num);
    }
    // Test for alpha values
    if( isalpha(num) != 0 )   // A-Z and a-z
    {
        printf("It is alpha\n");
    }
    else if(isdigit(num) != 0)
    {
        printf("It is digit\n");
    }
    else
    {
        printf("You are [%c]\n", num);
    }


    return 0;
}
// Function Definitions


