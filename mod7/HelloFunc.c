/*
 * =====================================================================================
 *
 *       Filename:  HelloFunc.c
 *
 *    Description:  Learn to use functions
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:41:09 AM
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
void Hello(void);
void HelloMany(int num);
int HelloNum(void);
int HelloNumMany(int num);
int MySquare(int n);


// Main Function
int main()
{
    Hello();
    Hello();
    HelloMany(1);
    int n = HelloNum();
    printf("I got %d from HelloNum()\n", n);
    n = HelloNumMany(5);
    printf("I got %d from HelloNumMay()\n", n);

    printf("The square of 9 is %d\n", MySquare(9));

    return 0;
}
// Function Definition
// Func: MySquare
// Param: n -> number to be squared
// Ret: n squared
int MySquare(int n)
{
    return n * n;
}
// Func: HelloNumMany
// Takes an integer
// Ret: The sum of Hello print statements
int HelloNumMany(int num)
{
    int count = 0;
    for(int i = 0; i < num; i++)
    {
        printf("%d) Hello NumMany\n", i + 1);
        count++;
    }
    return count;

}
// Func: HelloNum
// returns number 99
int HelloNum(void)
{
    int num = 99;
    return num;
}
// Func: Hello
// Prints Message
void Hello(void)
{
    printf("Hello Ogden World\n");
    return;
}

// Func: HelloMany
// prints message num times 
void HelloMany(int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("Weber State Great, Great, Great!\n");
    }
    return;
}

