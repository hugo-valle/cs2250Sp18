/*
 * =====================================================================================
 *
 *       Filename:  testMultiDudes.c
 *
 *    Description:  Test multiple structures in functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:37:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Dude.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    SuperDude s1, s2;
    // The & operator gives you the address
    InitInfoStruct(&s1); // init struct info
    ShowInfoStruct(&s1); // display struct info
    s2 = CopyInfoStruct(&s1);
    ShowInfoStruct(&s2); // display struct info

    return 0;
}
// Function Definitions


