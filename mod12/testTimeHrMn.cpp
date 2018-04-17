/*
 * =====================================================================================
 *
 *       Filename:  testTimeHrMn.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 09:57:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>  // For C
#include <iostream>  // For C++
using namespace std; // For C++
#include "TimeHrMn.h"

// Main Function
int main()
{
    TimeHrMn t1;
    t1.ShowTime();

    TimeHrMn t2(3, 22);
    t2.ShowTime();


    return 0;
}
// Function Definitions


