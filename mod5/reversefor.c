/*
 * =====================================================================================
 *
 *       Filename:  reversefor.c
 *
 *    Description:  count down for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:55:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{
    char name[] = "Waldo Weber";

    printf("Hi [%s] you are[%lu] bytes long\n", 
            name, sizeof(name));
    // Task 1, print one char at a time
    for(int c = 0; c < sizeof(name); c++)
    {
        printf("[%c]\n", name[c]);
    }
    // Task 2, Print name is reverse order. 
    // TODO next week


    for(int i = 10; i > 0; i--)
    {
        printf("i [%d]\n", i);
    }

    return 0;
}
// Function Definitions


