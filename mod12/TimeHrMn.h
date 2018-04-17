/*
 * =====================================================================================
 *
 *       Filename:  TimeHrMn.h
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
#ifndef  TIMEHRMN__INC__
#define  TIMEHRMN_INC__

class TimeHrMn
{
    private: 
        int hours;
        int minutes;
    public:
        // Default Constructor
        TimeHrMn();
        // Second Constructor
        TimeHrMn(int h, int m);
        // Getter Show function
        void ShowTime() const;
        // Operator +
        TimeHrMn operator+(TimeHrMn rhs);
};

#endif /* ----- #ifndef TIMEHRMN__INC__ ----- */

