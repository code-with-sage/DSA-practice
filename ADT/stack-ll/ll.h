#ifndef LL_H
#define LL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int ele;
    struct node *next;

} *NODE;

typedef struct Linked_list
{
    int size;
    NODE *head;

} *LIST;

LIST createNewList();

NODE createNewNode(int value);

void printList(LIST li);

void insertFisrt(NODE n1, LIST li);

void deleteFisrt(LIST li);

void isEmpty(LIST li);

#endif