/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Use index notation to access string members 
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:42:58 AM
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
    // 1) Define two strings
    char fname[20]; 
    char lname[20];
    // 2) Get fname info
    printf("Enter you fname\n");
    scanf("%s", fname);
    // 3) Get lname info
    printf("Enter you lname\n");
    scanf("%s", lname);
    // 4) Display initials 
    printf("Hello %s %s\n", fname, lname);
    // To access individual members of an array, use
    // Index notation with [ ]
    printf("Your initial are [%c%c]\n", fname[0], lname[3]);

    return 0;
}
// Function Definitions


