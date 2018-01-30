/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Test for race medals
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:30:32 AM
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
    int pos = 0;
    printf("What is your position?\n");
    scanf("%d", &pos);
    // 1) pos = 1 => gold medal
    if(pos == 1)
    {
        printf("You are %d gold medal\n", pos);
    }
    // 2) pos = 2 => silver medal
    else if(pos == 2)
    {
        printf("You are %d silver medal\n", pos);
    }
    // 3) pos = 3 => bronze medal
    else if(pos == 3)
    {
        printf("You are %d bronze medal\n", pos);
    }
    // 4) pos > 3 => Sorry no medal
    else
    {
        printf("You are %d place. Sorry no medal\n", pos);
    }

    return 0;
}
// Function Definitions


