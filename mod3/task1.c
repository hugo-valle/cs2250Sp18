/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Calculate the BMI
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:28:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    double weight, height, bmi;
    // 1) Capture weight in kg
    printf("Enter your weight: ");
    scanf("%lf", &weight);
    // 2) Caputer the height in meters
    printf("Enter your height: ");
    scanf("%lf", &height);
    // 3) Calculate your BMI = weight/height**2
    bmi = weight/pow(height, 2);
    // 4) Display BMI
    printf("Your BMI is: %lf\n", bmi);

    return 0;
}
// Function Definitions


