/*
 * =====================================================================================
 *
 *       Filename:  unitTest.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/22/2018 03:32:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <assert.h>

// Constants

// Function Prototypes
double HrMinToMin(int origHours, int origMinutes);

// Main Function
int main(void) 
{

    printf("Testing started\n");

    assert(HrMinToMin(0, 0) == 0);
    assert(HrMinToMin(0, 1) == 1);
    assert(HrMinToMin(0, 99) == 99);
    assert(HrMinToMin(1, 0) == 60);
    assert(HrMinToMin(5, 0) == 303);
    assert(HrMinToMin(2, 30) == 150);
    // Many more test vectors would be typical...

    printf("Testing completed\n");

    return 0;
}

// Function Definitions
double HrMinToMin(int origHours, int origMinutes) 
{
    int totMinutes = 0;  // Resulting minutes

    totMinutes = (origHours * 60) + origMinutes;

    return totMinutes;
}


