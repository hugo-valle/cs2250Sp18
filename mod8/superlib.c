/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  Super function defenitions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:37:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "superlib.h"
// Function Definitions
void StrSpaceToHyphen(char modString[], char sep) 
{
    int i = 0;  // Loop index
    for (i = 0; i < strlen(modString); ++i)
    {
        if (modString[i] == ' ') 
        {
            modString[i] = sep;
        }
    }
    return;
}

// Function counts number of digits 0-9 in 
// a string. Takes one argument string to analyze
int StrCountDigits(char modString[])
{
    int i = 0;  // Loop index
    int total = 0;
    for (i = 0; i < strlen(modString); ++i)
    {
        if ( isdigit(modString[i]))
        {
            total++;
        }
    }
    return total;
}
