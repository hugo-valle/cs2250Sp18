/*
 * =====================================================================================
 *
 *       Filename:  superlib.h
 *
 *    Description:  It is super duper functions for strings
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:34:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#ifndef __SUPERLIB_H__
#define __SUPERLIB_H__
// Constants 
// Inside header files, add the keyword: static before
// the definition.
static const int INPUT_STR_SIZE = 50;  // Input string size
// Function Prototypes
void StrSpaceToHyphen(char modString[], char separator);
// Task1: Function takes a string, returns number of digits
int StrCountDigits(char modString[]);

#endif // __SUPERLIB_H__
