/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  Hello world in C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:42:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>  // For C
#include <iostream>    // For C++
using namespace std;   // For C++ standard name
// Main Function
int main()
{
    int age;
    string name;
    //std::cout << "Hello World C++" << std::endl;
    cout << "Hello World C++" << endl;
    cout << "How old are you?" << endl; 
    cin >> age;
    cout << "You are "<< age << " old" << endl;
    cout << "What is your name?" << endl; 
    //cin >> name;  // take input up to the first space
    // TODO: I need to take care of the Enter key from previous
    // cin calls
    cin.ignore(); // should take care of the extra ENTER key
    getline(cin, name);  // take ALL input including spaces
    cout << "Hello "<< name << endl;

    return 0;
}
