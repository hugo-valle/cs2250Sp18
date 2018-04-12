/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.h
 *
 *    Description:  Peson Class information
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:41:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PERSONCLASS__INC__
#define  PERSONCLASS_INC__

class Person
{
    private: 
        int age;
        string name;
        double weight;
    public:
        Person(); // Default Constructor
        // TODO: Set parameters as optional
        //Person(int a = 0, string n = "None", double w = 0.0); // Second Constructor
        Person(int a, string n, double w); // Second Constructor

        void SetAge(int a); // Setter
        int GetAge();       // Getters

        void SetName(string n);
        string GetName();

        void SetWeight(double w);
        double GetWeight();

        void ShowInfo() const; // Constant Getter

        Person operator+(Person rhs); // operator + overload
};

#endif /* ----- #ifndef PERSONCLASS__INC__ ----- */

