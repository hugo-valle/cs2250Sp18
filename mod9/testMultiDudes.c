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
    SuperDude ss[ASIZE]; //array of structs
    // The & operator gives you the address
    InitInfoStruct(&s1); // init struct info
    ShowInfoStruct(&s1); // display struct info
    s2 = CopyInfoStruct(&s1);
    ShowInfoStruct(&s2); // display struct info
    // initialize your array of structs
    printf("\n\nNow array info\n");
    for(int i = 0; i < ASIZE; i++)
    {
        InitInfoStruct(&ss[i]); // init array member
        UpdateInfoStruct(&ss[i], i * 10); // Update info
        //ShowInfoStruct(&ss[i]); // display struct info
    }
    // Display all members of array using one function
    ShowInfoAllStruct(ss);

    return 0;
}
// Function Definitions


