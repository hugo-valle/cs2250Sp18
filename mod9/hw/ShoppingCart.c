/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  Shopping cart functions
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:16:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "ShoppingCart.h"

// Constants

// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddItem
 *  Description:  Add an ItemToPurchase to Shopping Cart
 *  Increment cartSize
 * =====================================================================================
 */
ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart)
{
    return cart;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  Remove an ItemToPurchase based on the name of the item 
 *  from Shopping Cart
 *  Decrement cartSize
 * =====================================================================================
 */
ShoppingCart RemoveItem(char name[], ShoppingCart cart)
{
    // 1) strcmp to find the item versus cart.cartItems[Index].name
    // 2) IF you find it, adjust your index in the array
    //  cart.cartItems[Index] = cart.cartItems[Index + 1];
    // ELSE: print No item
    return cart;
}

int GetNumItemsInCart(ShoppingCart cart)
{
    int totalItems = 0;

    return totalItems;
}

void PrintTotal(ShoppingCart cart)
{
    return;
}

void PrintDescriptions(ShoppingCart cart)
{
    return;
}

