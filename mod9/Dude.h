/*
 * =====================================================================================
 *
 *       Filename:  Dude.h
 *
 *    Description:  Dude Information
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:23:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  DUDE__INC__
#define  DUDE_INC__
struct Dude
{
    int age;
    double weight;
}; // DO NOT forget the ;

typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude; // DO NOT forget the ;

// Function Prototypes
void ShowInfo(int age, double weight);
// Pass a const address instead of the value
// it is READ only. You cannot modify the values
void ShowInfoStruct(const SuperDude* sd);
void InitInfoStruct(SuperDude* sd); // address of SuperDude type

#endif /* ----- #ifndef DUDE__INC__ ----- */

