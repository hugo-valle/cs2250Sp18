/*
 * =====================================================================================
 *
 *       Filename:  Dude.c
 *
 *    Description:  Dude function definitions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:25:42 AM
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

// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  Display age
 * =====================================================================================
 */
void ShowInfo(int age, double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.2lf]\n", weight);

    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoStruct
 *  Description:  Displays SuperDude information
 * =====================================================================================
 */
void ShowInfoStruct(const SuperDude* sd)
{
    printf("Your age is [%d]\n", sd->age);
    printf("Your weight is [%.2lf]\n", (*sd).weight);
    printf("Your sex is [%c]\n", sd->sex);

    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InitInfoStruct
 *  Description:  Initializes values of SuperDude struct
 * =====================================================================================
 */
void InitInfoStruct(SuperDude* sd)
{
    // When using an address of a structure, use the -> operator
    // to access the struct members instead of the . operator
    // which is used when you have the structure instead of the 
    // address
    sd->age = -99;
    sd->weight = -99.0;
    (*sd).sex = 'N'; // alternative way of updating the values the address points to. 
    //sd->sex = 'M'; // same as above
    return;
}
