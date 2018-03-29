/*
 * =====================================================================================
 *
 *       Filename:  firstLinkedList.c
 *
 *    Description:  first linkedlist
 *
 *        Version:  1.0
 *        Created:  03/29/2018 09:26:11 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// Main Function
#include <stdio.h>
#include <stdlib.h>

#include "IntLink.h"
// To autoindent the entire file, sit in the first line, then type:  =G

int main(void) 
{
    // Bookkeeping purposes
    IntNode* headObj  = NULL; // Create intNode objects
    IntNode* currObj  = NULL;
    // Actual Nodes
    IntNode* nodeObj1 = NULL;
    IntNode* nodeObj2 = NULL;
    IntNode* nodeObj3 = NULL;

    // Front of nodes list
    headObj = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(headObj, -1, NULL);

    // Insert nodes
    nodeObj1 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj1, 555, NULL);
    IntNode_InsertAfter(headObj, nodeObj1);

    nodeObj2 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj2, 999, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj2);

    nodeObj3 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj3, 777, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj3);

    // Print linked list
    currObj = headObj;
    while (currObj != NULL) 
    {
        IntNode_PrintNodeData(currObj);
        currObj = IntNode_GetNext(currObj);
    }
    // Clean your mess
    free(headObj);
    free(nodeObj1);
    free(nodeObj2);
    free(nodeObj3);

    return 0;
}
// Function Definitions

