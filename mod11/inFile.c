/*
 * =====================================================================================
 *
 *       Filename:  inFile.c
 *
 *    Description:  Read data from files
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:17:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
#define NUM 4
// const int NUM = 4;

// Main Function
int main()
{
    //int data[NUM]; // static mem=
    int* userNums;      // User numbers; dynamic mem.
    FILE* inFile = NULL;
    int arrSize = 0; // User specified number of integers
    printf("Opening file data.txt\n");
    // Open file for Reading purposes
    inFile = fopen("data.txt", "r");
    // Test for success
    if(inFile == NULL)
    {
        printf("Could not open file\n");
        return -1;
    }
    // Scan file, get number of records
    fscanf(inFile, "%d", &arrSize);
    printf("arrSize[%d]\n", arrSize);
    // Allocate memory
    userNums= (int*)malloc(sizeof(int)*arrSize);
    //Check you got your memory
    if(userNums == NULL)
    {
        printf("Unable to malloc mem\n");
        fclose(inFile);
        return -2;
    }
    // arrSize is the first member of the file, which in this case is
    // the HEADER record which has the value of number of records in the file. 
    int i = 1; // skip the HEADER record
    while(i <= arrSize)
    {
        // i -1 so you skip the HEADER record, but allocate your info
        // starting at index 0
        fscanf(inFile, "%d", &(userNums[i - 1]));
        i = i + 1;
    }
    // Print records
    i = 0;
    while(i < arrSize)
    {
        printf("Numbers [%d]\n", userNums[i]);
        i++;
    }

    // Close and clean
    fclose(inFile);
    free(userNums);
    return 0;
}
// Function Definitions


