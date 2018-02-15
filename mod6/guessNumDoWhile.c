/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  Guess Game with a do while loop
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:28:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
const int LEN = 2; // # of opportunities
const int NUM = 10; // number between 0-NUM
// Main Function
int main()
{
    int input[LEN]; 
    int guess = 0;
    int opp = 0;
    char answer = 'y';
    // 1) Create a random number between 0-NUM
    srand((int)time(0));
    // Task: when done, ask question.
    //  Do you want to play again:
    //    'y' for yes
    //       IF YES, repeat
    //    'n' for no
    //      ELSE quit, print "Bye bye"
    //   Anything else, ask question again. 
    do
    {
        guess = rand() % NUM; // guess num in range
        // 2) Ask the user to enter a guess number 0-NUM. Capture
        // input in an array
        // 2.1) You have LEN chances to guess the correct number
        while(opp < LEN)
        {
            printf("please enter a number between 0-%d: ", NUM);
            scanf("%d", &input[opp]);
            // 2.2) Validate input
            if(input[opp] > NUM || input[opp] < 0)
            {
                continue; // repeat question
            }
            // 3) IF the number is less than the random number
            //    print go higher. ELSE print go lower
            if(input[opp] < guess)
            {
                printf("Go higher\n");
            }
            else if (input[opp] == guess)
            {
                printf("You got it. [%d]\n", guess);
                break; // exit loop
            }
            else
            {
                printf("Go lower\n");
            }
            opp++; // increase 
        }// end of while OPP < LEN
        // 4) Display all the choices you entered
        printf("You entered: "); 
        for(int i = 0; i < opp; i++)
        {
            printf(" [%d] ", input[i]);
        }
        printf("\n");
        // Ask question 
        printf("Do you want to play again?\n");
        printf("\t'y' for yes\t 'n' for no\n");
        // Remember to take the ENTER key into consideration
        scanf(" %c", &answer);
        opp = 0; // reset values
    } while(answer != 'n')
    
    printf("\nThank you for playing\n");
    return 0;
}
// Function Definitions


