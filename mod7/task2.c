/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Calculate velocity
 *
 *        Version:  1.0
 *        Created:  02/22/2018 08:39:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
// Consts
const int METER_KM = 1000;
const int MIN_HOUR = 60;
const int SEC_MIN = 60;
// Function Prototypes
double Velocity(double dis, double t);
// Convert Km to m
double KmToM(double km);
// Convert Hours to minutes
double HrToM(double hr);

// Main Function
int main()
{
    // TODO: Remove testing units
    double distance = 2.5;  // Km
    double inTime  = 1.2;   // Hrs
    double vel;
    // 1) Capture user input

    // 2) Call Velocity Function Km/Hr
    printf("Distance = [%lf] Km\n", distance);
    printf("Time = [%lf] hours\n", inTime);
    vel = Velocity(distance, inTime);
    printf("Velocity = [%lf] km/hr\n", vel);
    // Calculate new velocity in meters/min
    inTime = HrToM(inTime);
    distance = KmToM(distance);
    printf("\nNew Units:\n");
    printf("Distance = [%lf] meters\n", distance);
    printf("Time = [%lf] minutes\n", inTime);
    vel = Velocity(distance, inTime);
    printf("Velocity = [%lf] meters/minutes\n", vel);


    return 0;
}
// Function Definitions
double Velocity(double dis, double t)
{
    return dis/t;
}
// Convert Km to m
double KmToM(double km)
{
    return km * METER_KM;
}
// Convert Hours to minutes
double HrToM(double hr)
{
    return hr * MIN_HOUR;
}
