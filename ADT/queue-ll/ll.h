#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct order
{
    int tableNum;
    int itemNumber;
} * ORDER;

typedef struct node
{
    ORDER order;
    struct node *next;
} * NODE;

typedef struct list
{
    int size;
    NODE front;
    NODE rear;
} * LIST;

LIST createNewList();
NODE createNewNode(int table, int item);
void inserLast(LIST li, NODE n1);
NODE deleteFirst(LIST li);
void printList(LIST li);

#endif