/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  Item information
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:55:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE_INC__

typedef struct ItemToPurchase_s
{
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;
}ItemToPurchase;

void MakeItemBlank(ItemToPurchase*  item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

