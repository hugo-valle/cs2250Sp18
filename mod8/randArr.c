/*
 * =====================================================================================
 *
 *       Filename:  randArr.c
 *
 *    Description:  Random array functions
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:17:48 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "randArr.h"

// Constants

// Function Definitions
// Initialize array with random number 
// between 0-100
void InitRandArray(int superArr[])
{
    // Set random seed
    srand((int)time(0));
    for(int i=0; i < ASIZE; i++)
    {
        //superArr[i] = rand()%100; 
        superArr[i] = rand(); 
    }

    return;
}
// Display array content
void ShowRandArray(int superArr[])
{
    for(int i=0; i < ASIZE; i++)
    {
        printf("[%04d] ", superArr[i]); 
    }
    printf("\n");
    return;
}


