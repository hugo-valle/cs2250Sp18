/*
 * =====================================================================================
 *
 *       Filename:  hwch3_p2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:03:15 AM
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
// Main Function
int main()
{
    char oil[11];
    int oilValue = 35;
    char tire[]="Tire rotation";
    int tireValue = 19;
    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n");
    strcpy(oil, "Oil Change");
    printf("[%s] $%d\n", oil, oilValue);
    printf("[%s] $%d\n", tire, tireValue);

    return 0;
}
// Function Definitions


