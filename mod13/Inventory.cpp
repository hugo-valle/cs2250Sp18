/*
 * =====================================================================================
 *
 *       Filename:  Inventory.cpp
 *
 *    Description:  Inventory class def.
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:29:17 AM
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
#include "Inventory.h"

// Function Definitions
// InventoryItem Constructor
InventoryItem::InventoryItem(string initName, int initQty) 
{
    itemName = initName;
    itemQuantity = initQty;

    return;
}

// InventoryItem function to print name/qty attributes
void InventoryItem::PrintItem() 
{
    cout << "name: " << this->itemName << ", " << "quantity: "
        << this->itemQuantity << endl;

    return;
}


