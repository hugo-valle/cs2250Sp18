/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take two numbers (double) from the user
 *                  Define the following functions.
 *                  1) TheSum: Returns the (int) sum of the 2 numbers
 *                  2) TheProd: Returns the (double) product of the 2 numbers
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:32:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Vale (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
char Menu(void);
int TheSum(double n1, double n2);
double TheProd(double n1, double n2);

// Main Function
int main()
{
    char input;
    // 1) Get User input
    double num1 = 3.5;
    double num2 = 4.8;

    input = Menu();
    switch(input)
    {
        case 's':
            // 2) Call TheSum
            printf("The sum of %lf + %lf = %d\n", num1, num2, 
                    TheSum(num1, num2));
            break;
        case 'p':
            // 3) Call TheProd
            printf("The prod of %lf + %lf = %lf\n", num1, num2, 
                    TheProd(num1, num2));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
// Function Definitions
char Menu(void)
{
    char in = 'n';
    printf("What do you want to do?\n");
    printf("\t s) TheSum\n");
    printf("\t p) TheProd\n");
    printf("\t q) Quit\n");
    scanf(" %c", &in);
    return in;
}

double TheProd(double n1, double n2)
{
    return n1 * n2;
}

int TheSum(double n1, double n2)
{
    // Return INT of the sum
    // Use casting (int)
    return (int) (n1 + n2);
}



