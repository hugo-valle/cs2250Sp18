/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Prompt for positive number, stay
 *                  in loop until one is entered.
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:04:58 AM
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
    int num = -1;
    while(num < 0)
    {
        printf("Enter a positive number >= 0: \n");
        scanf("%d", &num);
    }
    printf("Done!\n");
    return 0;
}
