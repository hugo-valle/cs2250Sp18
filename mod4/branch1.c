/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:45 AM
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
    int age = 0;
    int temp;
    // Request user input
    printf("How old are you?:\n");
    scanf("%d", &age);

    printf("you are %d years old\n", age);
    // Do not add a ; at the end of the IF statements
    if(age >= 18)   // IF True, go inside the block
    {
        printf("You can vote\n");
    }
    else    // Do not use a ( ). Default case or FALSE case
    {
        temp = 18 - age;
        printf("You have %d years to vote\n", temp);
    }
    // Drinking test
    if(age >= 21)
    {
        printf("You can buy alcohol\n");
    }
    else
    {
        temp = 21 - age;
        printf("You have %d years to by alcohol\n", temp);
    }
    // Retire test
    if(age >= 65)
    {
        printf("You can retire\n");
    }
    else
    {
        temp = 65 - age;
        printf("You have %d years to retire\n", temp);
    }
    // Special case age = 35
    if(age == 35)
    {
        printf("You are at the special age %d\n", age);
    }

    printf("Adios amigo\n");
    return 0;
}
// Function Definitions


