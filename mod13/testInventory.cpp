/*
 * =====================================================================================
 *
 *       Filename:  testInventory.cpp
 *
 *    Description:  Test inventory class
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:34:35 AM
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
#include <vector>
#include <string>
using namespace std; // For C++
#include "Inventory.h"
// Function Prototypes
void PrintAllItems(vector<InventoryItem*> itemsInventory);
void PrintCommands();
// Main Function
int main()
{
    vector<InventoryItem*> storeInventory; // Vector of InventoryItem pointers
    string productName;                    // Name of item in inventory
    int productQuantity = 0;               // Quantity of item in inventory
    string userInput;                      // User command
    int listPos = 0;                       // Position of item in vector

    //InventoryItem* newItem = nullptr;      // Pointer used to create an item
    //InventoryItem* tmp = nullptr;          // Pointer used to lookup an item
    InventoryItem* newItem;      // Pointer used to create an item
    InventoryItem* tmp;          // Pointer used to lookup an item

    // Output user options
    PrintCommands();

    while (userInput != "quit") 
    {
        // Prompt user for input
        cout << endl << "Your command: ";
        cin >> userInput;

        if (userInput == "add") 
        {         // Add new item name/qty to vector
            cout << "   New item name: ";
            cin >> productName;
            cout << "   New item quantity: ";
            cin >> productQuantity;
            // Request memory from the HEAP
            newItem = new InventoryItem(productName, productQuantity);
            storeInventory.push_back(newItem);
        }
        else if (userInput == "print") {  // Print current item name/qty in vector
            PrintAllItems(storeInventory);
        }
        else if (userInput == "remove") { // Remove item from vector
            cout << "   List position number: ";
            cin >> listPos;
            if (listPos < storeInventory.size()) {
                cout << "      Removed item " << listPos << "." << endl;
                tmp = storeInventory.at(listPos);
                delete tmp; // delete memory requested from new
                // Delete vector member
                storeInventory.erase(storeInventory.begin() + listPos);
            }
            else {
                cout << "      Error removing: Item "
                    << listPos << " doesn't exist." << endl;
            }
        }
        else if (userInput != "quit"){    // Quit program
            PrintCommands();
        }
    }

    return 0;
}
// Function Definitions
// Displays all items currently stored in vector itemsInventory
void PrintAllItems(vector<InventoryItem*> itemsInventory) 
{
    int i = 0; // Loop index
    // For each item call class member function to print
    for (i = 0; i < itemsInventory.size(); ++i) 
    {
        cout << i << " - ";
        (*itemsInventory.at(i)).PrintItem();
    }

    return;
}
// Displays user commands supported by program
void PrintCommands() 
{
    cout << "Valid commands are: add, print, remove, quit" << endl;
    return;
}



