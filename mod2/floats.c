/*
 * =====================================================================================
 *
 *       Filename:  floats.c
 *
 *    Description:  Learning about floating point
 *
 *        Version:  1.0
 *        Created:  01/18/2018 08:53:25 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constant
const double gravity = 9.8; // m/s^2
const double LB_TO_KG = 0.453592;
// Function Prototypes

// Main Function
int main()
{
    double weight = 2.4;
    printf("My w is %lf\n", weight);
    printf("Enter your weight in lb\n");
    scanf("%lf", &weight);
    printf("My w is %lf\n", weight);
    //gravity = 2.0;  // You cannot change constants
    printf("My weight in kg is %lf\n", weight * LB_TO_KG);
    printf("Your real weight is %lf\n", weight * LB_TO_KG * gravity);

    return 0;
}
// Function Definitions


