/*
 * =====================================================================================
 *
 *       Filename:  floatDiv.c
 *
 *    Description:  learn about float and int division
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:24:13 AM
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
    int age = 25;
    int grade = 303;
    double result;
    int  iresult;

    // We need to cast the int to doubles
    result  = (double)grade/(double)age;
    printf("result = %lf\n", result);
    iresult  = (double)grade/(double)age;
    printf("result = %d\n", iresult);
    // Print a double as an integer
    printf("result = %d\n", (int)result);

    return 0;
}
// Function Definitions


