/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.cpp
 *
 *    Description:  Person Class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:48:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h>  // For C
#include <iostream>  // For C++
using namespace std; // For C++
#include "PersonClass.h"

// Constructor
Person::Person()
{
    // Init all/Most of your variables or attributes
    age = 0;
    name = "None";
    weight = 0.0;
    return;
}
// 
Person::Person(int a, string n, double w) // Second Constructor
{
    age = a;
    name = n;
    weight = w;
    return;
}

void Person::ShowInfo() const // Constant Getter
{
    // The "this" pointer is an alias to 
    // the object itself
    cout<<"Name "<< this->name << endl;
    cout<<"Age "<< this->age << endl;
    cout<<"Weight "<< this->weight << endl;
    return;
}
// Function Definitions
void Person::SetAge(int a)
{
    age = a;
    return;
}
int Person::GetAge()
{
    return age;
}

void Person::SetName(string n)
{
    name = n;
    return;
}
string Person::GetName()
{
    return name;
}

void Person::SetWeight(double w)
{
    weight = w;
    return;
}
double Person::GetWeight()
{
    return weight;
}


Person Person::operator+(Person rhs) // operator + overload
{
    Person tmp;
    // Add elements of objects
    //        first   second  
    tmp.age = age + rhs.age;
    tmp.name = name + " " + rhs.name;
    tmp.weight = weight + rhs.weight;

    return tmp;
}
