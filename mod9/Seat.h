/*
 * =====================================================================================
 *
 *       Filename:  Seat.h
 *
 *    Description:  Seating library
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:29:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SEAT__INC__
#define  SEAT_INC__

#include <stdbool.h>

typedef struct Seat_struct 
{
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;

void SeatMakeEmpty(Seat* seat); 
bool SeatIsEmpty(Seat seat);
void SeatPrint(Seat seat);
void SeatsMakeEmpty(Seat seats[], int numSeats);
void SeatsPrint(Seat seats[], int numSeats);

#endif /* ----- #ifndef SEAT__INC__ ----- */

